`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:14:40 12/11/2014 
// Design Name: 
// Module Name:    MIPS 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
`define op 31:26
`define funct 5:0
`define rs 25:21
`define rt 20:16
`define rd 15:11


module MIPS( clk , reset
    );
input clk;
input reset;
//IF级
wire [31:0] PC_final;
wire [31:0] instr;
wire [31:0] NEWPC;
wire PCenable;
wire IF_IDenable;
wire [31:0] PCADD4_IF;
wire [31:0] IR_D,IR_E,IR_M,IR_W;
//ID级
wire [31:0] RS_D,RT_D;
wire [31:0] NPC_bj;
wire [4:0] A3_final;
wire [31:0] PC4_D;
wire [31:0] immext;
wire [31:0] WD_final ;
wire NPCop ;
wire [2:0] CMPop ;
wire Extop ;
wire cmpresult ;
wire [1:0] PCsel ;
wire [31:0] EXT_E;
wire [31:0] RD1 , RD2;
//EX
wire [3:0] ALUop;
wire [31:0] ALUa , ALUb , ALU_E;
wire over;
//wire [31:0] IR_E ;
wire [31:0] PC8_E, PC8_M ,PC8_W ;
wire [31:0] RD1_E , RD2_E , RS_E , RT_E , RT_M;
wire MULTDIVwe;
wire [1:0] MULTDIVop ;
wire [31:0] HI,LO,HILO;
wire HiLo;
wire HILOsel ,ALUAsel,ALUBsel ;
wire busy;
//MEM
wire [31:0] DM_M , DM_W;
wire [31:0] HILO_M , HILO_W , ALU_M;
wire [31:0] RD2_M ;
wire [1:0] st_signal ;
wire [3:0] BE;
//WB
wire [31:0] DataExt_dout;
wire [1:0] WRsel , WDsel;
wire [2:0] op_DATA_EXT;
wire we_GPR;
wire [31:0] ALU_W;
//Bypass

wire enable_PC,enable_IF_ID,reset_ID_EX;
wire [2:0] RSsel_D ,  RTsel_D, RSsel_E, RTsel_E;
wire RTsel_M;

IM im( PC_final , instr );
PC pc( reset , enable_PC , clk , NEWPC , PC_final );
ADD4 add4( PC_final , PCADD4_IF );
IF_ID if_id( enable_IF_ID , clk , instr , PCADD4_IF , IR_D , PC4_D);
//ID
GPRs gpr( IR_D[`rs] , IR_D[`rt] , A3_final , WD_final , we_GPR , clk , reset , RD1 , RD2 );//A3 final
CMP cmp( CMPop ,RS_D , RT_D , cmpresult );
NPC npc( NPCop , immext , PC4_D , NPC_bj);
EXT ext(IR_D[15:0], Extop, immext );//im 15
CONTROL_ID control_d( cmpresult , IR_D , PCsel , Extop , NPCop , CMPop);
ID_EXE id_exe(reset , reset_ID_EX , clk , 
IR_D , PC4_D , RS_D , RT_D , immext , 
IR_E , PC8_E , RD1_E, RD2_E , EXT_E );	// RS_D , RT_D
//EXE
ALU alu(ALUop , ALUa , ALUb , ALU_E);
MULDIV muldiv(reset, MULTDIVwe , clk, HiLo, start, MULTDIVop,  RS_E , RT_E , busy, HI, LO);
CONTROL_EX control_ex( IR_E,ALUAsel,ALUBsel, HILOsel,ALUop, MULTDIVwe, HiLo, start, MULTDIVop);
EX_MEM ex_mem( clk, IR_E, PC8_E , ALU_E, HILO , RT_E , IR_M , PC8_M , ALU_M , HILO_M , RD2_M );

//MEM

BE be(st_signal,ALU_M[1:0],BE);
DM dm( reset , we_DM, clk, BE, ALU_M[12:2] , RT_M , DM_M);

CONTROL_MEM control_mem( IR_M, we_DM, st_signal );

MEM_WB mem_wb(clk, 
IR_M, PC8_M, ALU_M, DM_M,  HILO_M,
IR_W, PC8_W, ALU_W, DM_W, HILO_W );

//WB
CONTROL_WB control_wb( IR_W, we_GPR, WRsel, WDsel, op_DATA_EXT);
DM_EXT dm_ext(op_DATA_EXT, ALU_W[1:0], DM_W, DataExt_dout);


//MUX BUYPASS STOP
BYPASSMUX bypassmux( 
RSsel_D, RD1, PC8_E, ALU_M, HILO_M, PC8_M, WD_final, RS_D, //gaoding RS_D is shuchu 
RTsel_D, RD2, RT_D,   //gaoding
RSsel_E, RD1_E, RS_E, //gaoding
RTsel_E, RD2_E, RT_E, //gaoding
RTsel_M, RD2_M, RT_M //gaoding
    );
	 
BYPASS_CONTROL bypassctr( IR_D,IR_E, IR_M, IR_W, RSsel_D, RTsel_D, RSsel_E , RTsel_E , RTsel_M);//gaoding.....


MUX mux( PCsel, NPC_bj, PCADD4_IF, RS_D, NEWPC, //gaoding....
ALUAsel, IR_E, RS_E, ALUa, //gaoding
ALUBsel,RT_E, EXT_E, ALUb,//gaoding
HILOsel, HI, LO, HILO, //gaoding HILO读出寄存器的选择。
WRsel,IR_W[`rd], IR_W[`rt], A3_final,//gaoding
WDsel, ALU_W, HILO_W,PC8_W, DataExt_dout, WD_final);//gaoding

STALL_CONTROL stallctr( start, IR_D,IR_E,IR_M,IR_W, busy, enable_PC, enable_IF_ID,reset_ID_EX);//搞定

endmodule
