`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:09:00 12/11/2014 
// Design Name: 
// Module Name:    MUX 
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

module MUX( PCsel, NPC_bj, ADD4, GPR_RD1, NEWPC, 
ALUAsel, IR_E, RS_E, ALUA, 
ALUBsel,RT_E, EXTEND_E, ALUB,
HILOsel, HI, LO, HILO, 
WRsel,rd, rt, A3,
WDsel, ALU_W, HILO_W,PC8_W, DM_EXTEND, WD
);
	 
	 ///
    input [1:0] PCsel;
    input [31:0] NPC_bj;
    input [31:0] ADD4;
	 input [31:0] GPR_RD1;
    output [31:0] NEWPC;
    input ALUAsel;
    input [31:0] IR_E;
    input [31:0] RS_E;
    output [31:0] ALUA; //for ALUA
    input ALUBsel;
    input [31:0] RT_E;
    input [31:0] EXTEND_E; //for ALUB
    output [31:0] ALUB;
    input HILOsel;
    input [31:0] HI;
    input [31:0] LO;
    output [31:0] HILO;
    input [1:0] WRsel;
    input [4:0] rd;
    input [4:0] rt;
    output [4:0] A3;
    input [1:0] WDsel;
    input [31:0] ALU_W;
    input [31:0] HILO_W;
    input [31:0] PC8_W;
    input [31:0] DM_EXTEND;
    output [31:0] WD;
	 
	 assign NEWPC = ( PCsel == 2'b00 ) ?  ADD4:( PCsel == 2'b01 )? NPC_bj : ( PCsel == 2'b10 ) ? GPR_RD1 : ADD4 ;	 
	 assign HILO = HILOsel ? LO : HI ;
	 assign A3 = ( WRsel == 2'b00 ) ? rd : ( WRsel == 2'b01 ) ? rt : 5'd31 ;
	 assign WD = ( WDsel == 2'b00 ) ? ALU_W : ( WDsel == 2'b01 ) ? DM_EXTEND : ( WDsel == 2'b10 ) ? PC8_W : HILO_W ;
	 assign ALUA = ALUAsel ? IR_E : RS_E ;
	 assign ALUB = ALUBsel ? RT_E : EXTEND_E ;
	

endmodule