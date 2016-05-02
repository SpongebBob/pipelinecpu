`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:10:34 12/10/2014 
// Design Name: 
// Module Name:    ID_EXE 
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
module ID_EXE(reset , stall_reset , clk , instr_ID , PC4_D , RS_D , RT_D , EXT , instr_EXE , PC8_E , RD1_E, RD2_E , EXT_E );	 
	 
	 input reset;
	 input stall_reset;
	 input clk;
    input [31:0] instr_ID;
    input [31:0] PC4_D;
    input [31:0] RS_D;
    input [31:0] RT_D;
    input [31:0] EXT;
	 
    output [31:0] instr_EXE;
    output [31:0] PC8_E;
    output [31:0] RD1_E;
    output [31:0] RD2_E;
    output [31:0] EXT_E;
	 initial instr_EXE = 0 ;
	 
	 reg [31:0] instr_EXE , PC8_E , RD1_E , RD2_E , EXT_E ;
	 
	 always @(posedge clk)
		if((!reset)&&(!stall_reset))
			begin
				instr_EXE <= instr_ID ;
				PC8_E <= PC4_D + 4 ;
				RD1_E <= RS_D ;
				RD2_E <= RT_D ;
				EXT_E <= EXT ;
			end
		else instr_EXE <= 0 ;
     
endmodule
