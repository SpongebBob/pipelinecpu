`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:00:31 12/10/2014 
// Design Name: 
// Module Name:    CONTROL 
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

module CONTROL_WB(
    input [31:0] IR_W,
	 
    output GPR_we,
    output [1:0] WRsel,
    output [1:0] WDsel,
    output [2:0] DATA_EXTop
    );
	 
	 	 //WB
	 wire lb_W , lbu_W , lh_W , lhu_W , lw_W ;//load
	 wire add_W , addu_W , sub_W , subu_W , and_W , or_W , xor_W , nor_W ;//r_cal
	 wire addi_W , addiu_W , andi_W , ori_W , xori_W , lui_W ;//i_cal
	 wire sll_W , srl_W , sra_W , sllv_W , srlv_W , srav_W ;//shift
	 wire slt_W , slti_W , sltiu_W , sltu_W ;//set
	 wire jal_W , jalr_W ;//jtype
	 wire mfhi_W , mflo_W ;//movehilo 
	 
	 //load
	 assign lb_W = IR_W[`op] == 6'b100000 ;
	 assign lbu_W = IR_W[`op] == 6'b100100 ;
	 assign lh_W = IR_W[`op] == 6'b100001 ;
	 assign lhu_W = IR_W[`op] == 6'b100101 ;
	 assign lw_W = IR_W[`op] == 6'b100011 ;
	 //r_cal
	 assign add_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b100000 ) ;
	 assign addu_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b100001 ) ;
	 assign sub_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b100010 ) ;
	 assign subu_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b100011 ) ;
	 assign and_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b100100 ) ;
	 assign or_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b100101 ) ;
	 assign xor_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b100110 ) ;
	 assign nor_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b100111 ) ;
	 //i_cal
	 assign addi_W = IR_W[`op] == 6'b001000 ;
	 assign addiu_W = IR_W[`op] == 6'b001001 ;
	 assign andi_W = IR_W[`op] == 6'b001100 ;
	 assign ori_W = IR_W[`op] == 6'b001101 ;
	 assign xori_W = IR_W[`op] == 6'b001110 ;
	 assign lui_W = IR_W[`op] == 6'b001111 ;
	 //shift
	 assign sll_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b000000 ) && ( IR_W != 0 ) ; 
	 assign srl_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b000010 ) ;
	 assign sra_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b000011 ) ;
	 assign sllv_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b000100 ) ; 
	 assign srlv_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b000110 ) ;
	 assign srav_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b000111 ) ;
	 //set
	 assign slt_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b101010 ) ;
	 assign slti_W = IR_W[`op] == 6'b001010 ;
	 assign sltiu_W = IR_W[`op] == 6'b001011 ;
	 assign sltu_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b101011 ) ;
	 //jtype
	 assign jal_W = IR_W[`op] == 6'b000011 ;
	 assign jalr_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b001001 ) ;
	 //movehilo
	 assign mfhi_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b010000 ) ;
	 assign mflo_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b010010 ) ;

	 
	 
	 wire RCAL_W , ICAL_W , SHIFT_W , SET_W , J_W , MF_W , LOAD_W;
	 
	 assign RCAL_W = add_W | addu_W | sub_W | subu_W | and_W | or_W | xor_W | nor_W ;
	 assign ICAL_W = addi_W | addiu_W | andi_W | ori_W | xori_W | lui_W ;
	 assign SHIFT_W = sll_W | srl_W | sra_W | sllv_W | srlv_W | srav_W ;
	 assign SET_W = slt_W | slti_W | sltiu_W | sltu_W ;
	 assign J_W = jal_W | jalr_W ;
	 assign MF_W = mfhi_W | mflo_W ;
	 assign LOAD_W = lb_W | lbu_W | lh_W | lhu_W | lw_W ;
	 // for the control signal
	 // GPR write signial RC IC SHIFT SET J MF Load 
	 
	 
	 
	 
	 ////////////////////////////////////////////////
							 
	 assign WRsel[1] = jal_W ;
	 
	 assign WRsel[0] = ICAL_W | LOAD_W | ( slti_W | sltiu_W ) ;
							 
	 assign WDsel[1] = jal_W | jalr_W | mflo_W | mfhi_W ;
	 
	 assign WDsel[0] = LOAD_W | mflo_W | mfhi_W ;
	 
	 assign DATA_EXTop[0] = ( lbu_W | lhu_W );
	 
	 assign DATA_EXTop[1] = ( lb_W | lhu_W );
	 
	 assign DATA_EXTop[2] = lh_W ;
	 
	 assign GPR_we = RCAL_W | ICAL_W | SHIFT_W | SET_W | J_W | MF_W | LOAD_W ;


endmodule
