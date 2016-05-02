`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:16:33 12/11/2014 
// Design Name: 
// Module Name:    STALL_CONTROL 
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
`define RS 25:21
`define RT 20:16
`define RD 15:11

module STALL_CONTROL( start,IR_D,IR_E,IR_M,IR_W, busy, ePC, eIF_ID,rID_EX);
	 input start;
	 input [31:0] IR_D;
    input [31:0] IR_E;
    input [31:0] IR_M;
    input [31:0] IR_W;
    input busy;
    output ePC;
    output eIF_ID;
    output rID_EX;
	 
	 wire[4:0] RS_D , RT_D ;
	 assign RS_D = IR_D[25:21] ;
	 assign RT_D = IR_D[20:16] ;
	 
	 
	 //intruct_level
	 wire lb_D , lbu_D , lh_D , lhu_D , lw_D ;//load
	 wire sb_D , sh_D , sw_D ;//store
	 wire add_D , addu_D , sub_D , subu_D , and_D , or_D , xor_D , nor_D ;//r_cal
	 wire addi_D , addiu_D , andi_D , ori_D , xori_D ;//i_cal
	 wire mult_D , multu_D , div_D , divu_D ;//muldiv
	 wire sll_D , srl_D , sra_D , sllv_D , srlv_D , srav_D ;//shift
	 wire slt_D , slti_D , sltiu_D , sltu_D ;//set
	 wire beq_D , bne_D , blez_D , bgtz_D , bltz_D , bgez_D ;//btype
	 wire jalr_D , jr_D ;//jtype
	 wire mthi_D , mtlo_D , mfhi_D , mflo_D ;//movehilo 
	 
	 //load
	 assign lb_D = IR_D[`op] == 6'b100000 ;
	 assign lbu_D = IR_D[`op] == 6'b100100 ;
	 assign lh_D = IR_D[`op] == 6'b100001 ;
	 assign lhu_D = IR_D[`op] == 6'b100101 ;
	 assign lw_D = IR_D[`op] == 6'b100011 ;
	 //store
	 assign sb_D = IR_D[`op] == 6'b101000 ;
	 assign sh_D = IR_D[`op] == 6'b101001 ;
	 assign sw_D = IR_D[`op] == 6'b101011 ;
	 //r_cal
	 assign add_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b100000 ) ;
	 assign addu_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b100001 ) ;
	 assign sub_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b100010 ) ;
	 assign subu_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b100011 ) ;
	 assign and_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b100100 ) ;
	 assign or_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b100101 ) ;
	 assign xor_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b100110 ) ;
	 assign nor_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b100111 ) ;
	 //i_cal
	 assign addi_D = IR_D[`op] == 6'b001000 ;
	 assign addiu_D = IR_D[`op] == 6'b001001 ;
	 assign andi_D = IR_D[`op] == 6'b001100 ;
	 assign ori_D = IR_D[`op] == 6'b001101 ;
	 assign xori_D = IR_D[`op] == 6'b001110 ;
	 //muldiv
	 assign mult_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b011000 ) ;
	 assign multu_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b011001 ) ;
	 assign div_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b011010 ) ;
	 assign divu_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b011011 ) ;
	 //shift
	 assign sll_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b000000 ) && ( IR_D != 0 ) ;
	 assign srl_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b000010 ) ;
	 assign sra_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b000011 ) ;
	 assign sllv_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b000100 ) ;
	 assign srlv_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b000110 ) ;
	 assign srav_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b000111 ) ;
	 //set
	 assign slt_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b101010 ) ;
	 assign slti_D = IR_D[`op] == 6'b001010 ;
	 assign sltiu_D = IR_D[`op] == 6'b001011 ;
	 assign sltu_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b101011 ) ;
	 //btype
	 assign beq_D = IR_D[`op] == 6'b000100 ;
	 assign bne_D = IR_D[`op] == 6'b000101 ;
	 assign blez_D = IR_D[`op] == 6'b000110 ;
	 assign bgtz_D = IR_D[`op] == 6'b000111 ;
	 assign bltz_D = ( IR_D[`op] == 6'b000001 ) && ( IR_D[20:16] == 5'b00000 ) ;
	 assign bgez_D = ( IR_D[`op] == 6'b000001 ) && ( IR_D[20:16] == 5'b00001 ) ;
	 //jtype
	 assign jalr_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b001001 ) ;
	 assign jr_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b001000 ) ;
	 //movehilo
	 assign mthi_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b010001 ) ;
	 assign mtlo_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b010011 ) ;
	 assign mfhi_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b010000 ) ;
	 assign mflo_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b010010 ) ;
	 
	 
	wire lb_E , lbu_E , lh_E , lhu_E , lw_E ;//load	
	wire add_E , addu_E , sub_E , subu_E , and_E , or_E , xor_E , nor_E ;//r_cal
	wire addi_E , addiu_E , andi_E , ori_E , xori_E , lui_E ;//i_cal
	wire sll_E , srl_E , sra_E , sllv_E , srlv_E , srav_E ;//shift
	wire slt_E , slti_E , sltiu_E , sltu_E ;//set
	wire mfhi_E , mflo_E ;//mf
	wire jalr_E , jal_E ;
	
	 //load
	 assign lb_E = IR_E[`op] == 6'b100000 ;
	 assign lbu_E = IR_E[`op] == 6'b100100 ;
	 assign lh_E = IR_E[`op] == 6'b100001 ;
	 assign lhu_E = IR_E[`op] == 6'b100101 ;
	 assign lw_E = IR_E[`op] == 6'b100011 ;
	 //r_cal
	 assign add_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b100000 ) ;
	 assign addu_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b100001 ) ;
	 assign sub_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b100010 ) ;
	 assign subu_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b100011 ) ;
	 assign and_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b100100 ) ;
	 assign or_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b100101 ) ;
	 assign xor_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b100110 ) ;
	 assign nor_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b100111 ) ;
	 //i_cal
	 assign addi_E = IR_E[`op] == 6'b001000 ;
	 assign addiu_E = IR_E[`op] == 6'b001001 ;
	 assign andi_E = IR_E[`op] == 6'b001100 ;
	 assign ori_E = IR_E[`op] == 6'b001101 ;
	 assign xori_E = IR_E[`op] == 6'b001110 ;
	 assign lui_E = IR_E[`op] == 6'b001111 ;
	 //shift
	 assign sll_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b000000 ) && ( IR_E != 0 ) ;
	 assign srl_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b000010 ) ;
	 assign sra_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b000011 ) ;
	 assign sllv_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b000100 ) ;
	 assign srlv_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b000110 ) ;
	 assign srav_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b000111 ) ;
	 //set
	 assign slt_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b101010 ) ;
	 assign slti_E = IR_E[`op] == 6'b001010 ;
	 assign sltiu_E = IR_E[`op] == 6'b001011 ;
	 assign sltu_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b101011 ) ;
	 //movehilo
	 assign mfhi_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b010000 ) ;
	 assign mflo_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b010010 ) ;
	 //jal,jalr
	 assign jal_E = IR_E[`op] == 6'b000011 ;
	 assign jalr_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b001001 ) ;
	 
	 wire lb_M , lbu_M , lh_M , lhu_M , lw_M ;//load
	 //load
	 assign lb_M = IR_M[`op] == 6'b100000 ;
	 assign lbu_M = IR_M[`op] == 6'b100100 ;
	 assign lh_M = IR_M[`op] == 6'b100001 ;
	 assign lhu_M = IR_M[`op] == 6'b100101 ;
	 assign lw_M = IR_M[`op] == 6'b100011 ;
	 
	 wire LOAD_E , LOAD_M , OTHER_E ;
	 
	 wire N_RS_D , N_RT_D , N_RS_E , N_RT_E ;
	 
	 //Tuse = 0
	 //RS  b类 jr类 在D级用寄存器RS
	 assign N_RS_D = ( beq_D | bne_D | blez_D | bgtz_D | bltz_D | bgez_D )
						| jr_D | jalr_D ;
	//Tuse = 0
	//RT beq & bne 在D级用寄存器RT			
	 assign N_RT_D =  beq_D | bne_D ;
	 
	 wire store_D ;
	 assign store_D = ( sb_D | sh_D | sw_D ) ;
	 wire load_D ;
	 assign load_D = lb_D | lbu_D | lh_D | lhu_D | lw_D ;
	 wire calr_D ;
	 assign calr_D = ( add_D | addu_D | sub_D | subu_D | and_D | or_D | xor_D | nor_D ) ;
	 wire cali_D ;
	 assign cali_D = ( addi_D | addiu_D | andi_D | ori_D | xori_D ) ;
	 wire mtdv_D ;
	 assign mtdv_D = ( mult_D | multu_D | div_D | divu_D ) ;
	 wire shiftrs_D;
	 assign shiftrs_D = ( sllv_D | srlv_D | srav_D ) ;
	 wire setrs_D ;
	 assign  setrs_D = ( slt_D | slti_D | sltiu_D | sltu_D ) ;
	 //Tuse = 1
	 //RS E级使用寄存器 load类 store类 R I 乘除 置位（RI） 写HILO  移位（RS）
	 assign N_RS_E =  load_D| store_D | calr_D | cali_D| shiftrs_D | mtdv_D | setrs_D  | ( mthi_D | mtlo_D ) ;
	//Tuse = 1
	//RT E级使用寄存器 R  乘除 置位（R） 移位（RS&RT） 
    wire  shiftrt_D;
	 assign shiftrt_D = ( sll_D | srl_D | sra_D | sllv_D | srlv_D | srav_D ) ;
	 assign N_RT_E = calr_D | shiftrt_D | mtdv_D| ( slt_D | sltu_D ) ;
	 //load 类
	 //Tnew = 2
	 assign LOAD_E = lb_E | lbu_E | lh_E | lhu_E | lw_E ;
	 
	 //Tnew = 2
	 assign LOAD_M = lb_M | lbu_M | lh_M | lhu_M | lw_M ;
	 
	 //Tnew = 1 
	 //E级需求
	 wire calr_E ; 
	 assign calr_E = ( add_E | addu_E | sub_E | subu_E | and_E | or_E | xor_E | nor_E ) ;
	 wire cali_E ;
	 assign cali_E = ( addi_E | addiu_E | andi_E | ori_E | xori_E | lui_E ) ;
	 wire shiftrt_E;
	 assign shiftrt_E = ( sll_E | srl_E | sra_E | sllv_E | srlv_E | srav_E ) ;
	 wire set_E;
	 assign set_E = ( slt_E | slti_E | sltiu_E | sltu_E ) ;
	 //
	 	wire stall ,stall1 , stall2 ,stall3 ,stall4, stall5,stall6,stall7;

	 assign OTHER_E = calr_E | cali_E| shiftrt_E| set_E| ( mfhi_E | mflo_E ) ;
							
	 //构造回写寄存器
	 wire[4:0] RW_E , RW_M ;
	
	//E级指令的目标回写寄存器 
	 assign RW_E = ( calr_E| shiftrt_E| ( slt_E | sltu_E ) | ( mfhi_E | mflo_E ) | jalr_E ) ? IR_E[15:11] : jal_E ? 5'd31 : IR_E[20:16] ;
	
  	// M级指令的目标回写寄存器（ load类 ）
	 assign RW_M = LOAD_M ? IR_M[20:16] : 5'd0 ;
	 
	 wire mtdvall_D;
	 
	 assign mtdvall_D = mult_D | multu_D | div_D | divu_D | mthi_D | mtlo_D | mfhi_D | mflo_D ;
	 
	 //暂停条件
	 //1.busy
	 //2.Tuse=0 Tnew =1 Tnew =2
	 assign stall1 = ( (start |busy) & mtdvall_D );
	 //乘除阻塞。
	 
	 assign stall2 = ( N_RS_D & ( RS_D == RW_E ) & ( LOAD_E | OTHER_E ) );
	 //Tuse=0 Tnew=1
	 
	 assign stall3 = ( N_RS_D & ( RS_D == RW_M ) & LOAD_M ); 
	 //Tsue=0 Tnew=2
	 
	 assign stall4 =  ( N_RT_D & ( RT_D == RW_E ) & ( LOAD_E | OTHER_E ) ) ;
	 //Tuse=0 Tnew=1
	 
	 assign stall5 =  ( N_RT_D & ( RT_D == RW_M ) & LOAD_M ); 
	 //Tsue=0 Tnew=2
	 
	 assign stall6 =  ( N_RS_E & ( RS_D == RW_E ) & LOAD_E ) ;
	 // Tuse=1 Tnew=2
	 
	 assign stall7 = ( N_RT_E & ( RT_D == RW_E ) & LOAD_E ) ;
	 //Tuse=1 Tnew=2	
	 
	 assign stall = stall1 || stall2|| stall3|| stall4|| stall5|| stall6||stall7;
	 
	 assign ePC = !stall ;
	 
	 assign eIF_ID = !stall ;
	 
	 assign rID_EX = stall ;
						 
	 
endmodule
