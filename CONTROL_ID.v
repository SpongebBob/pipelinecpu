`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:08:33 12/10/2014 
// Design Name: 
// Module Name:    CONTROL_ID 
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
`define beq 6'b000100
`define bne 6'b000101
`define blez 6'b000110
`define bgtz 6'b000111
`define bltz_op 6'b000001
`define bltz_fun 5'b00000
`define bgez_op 6'b000001
`define bgez_fun 5'b00001
`define j 6'b000010
`define jal 6'b000011
`define jalr_fun 6'b001001
`define jr_fun 6'b001000



module CONTROL_ID(CMPresult,IR_D,PCsel,EXTop,NPCop,CMPop);

    input CMPresult;
    input [31:0] IR_D;
    output [1:0] PCsel;
   // output PC4_RSsel,
    output EXTop;
    output NPCop;
    output [2:0] CMPop;


 //PCsel
		wire beq_D , bne_D , blez_D , bgtz_D , bltz_D , bgez_D ;//btype
		wire j_D , jal_D , jalr_D , jr_D ;//jtype
	   wire andi_D , ori_D , xori_D ;//extend
		wire b;
		//extend
		assign andi_D = IR_D[`op] == 6'b001100 ;
		assign ori_D = IR_D[`op] == 6'b001101 ;
		assign xori_D = IR_D[`op] == 6'b001110 ;
	
		//btype
		assign bgtz_D = IR_D[`op] == 6'b000111 ;
		assign bltz_D = ( IR_D[`op] == 6'b000001 ) && ( IR_D[`rt] == 5'b00000 ) ;
		assign bgez_D = ( IR_D[`op] == 6'b000001 ) && ( IR_D[`rt] == 5'b00001 ) ;
		assign beq_D = IR_D[`op] == 6'b000100 ;
		assign bne_D = IR_D[`op] == 6'b000101 ;
		assign blez_D = IR_D[`op] == 6'b000110 ;
		assign b =  beq_D | bne_D | blez_D | bgtz_D | bltz_D | bgez_D ;

		//jtype
		assign j_D = IR_D[`op] == 6'b000010 ;
		assign jal_D = IR_D[`op] == 6'b000011 ;
		assign jalr_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b001001 ) ;
		assign jr_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b001000 ) ;
		
		

		//EXTop 1: zero extend 0: sign extend
	   assign EXTop = andi_D | ori_D | xori_D ;
	   assign NPCop =  j_D | jal_D;
	   //op_CMP
		assign CMPop[0] = bne_D | bgtz_D | bgez_D  ;
		assign CMPop[1] = blez_D | bgtz_D  ;
		assign CMPop[2] =  bltz_D | bgez_D  ;
		
	  	//PCsel 00:ADD4 01:NPC_bj 10:GPR
	   assign PCsel[0] = j_D | jal_D | ( CMPresult & b ) ;
	   assign PCsel[1] = jalr_D | jr_D;
	   
endmodule