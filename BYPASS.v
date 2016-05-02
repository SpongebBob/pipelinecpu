`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:14:18 12/11/2014 
// Design Name: 
// Module Name:    BYPASS 
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
module BYPASSMUX( sel_RS_D,RD1,PC8_E, ALU_M, HILO_M, PC8_M, 
WtDt, RS_D, sel_RT_D, RD2, RT_D, 
sel_RS_E, RD1_E, RS_E, sel_RT_E,RD2_E,
RT_E, sel_RT_M, RD2_M, RT_M
);
	 
	 
	 input [2:0] sel_RS_D;
    input [31:0] RD1;
    input [31:0] PC8_E;
    input [31:0] ALU_M;
    input [31:0] HILO_M;
    input [31:0] PC8_M;
    input [31:0] WtDt;
    output [31:0] RS_D;
    input [2:0] sel_RT_D;
    input [31:0] RD2;
    output [31:0] RT_D;
    input [2:0] sel_RS_E;
    input [31:0] RD1_E;
    output [31:0] RS_E;
    input [2:0] sel_RT_E;
    input [31:0] RD2_E;
    output [31:0] RT_E;
    input sel_RT_M;
    input [31:0] RD2_M;
    output [31:0] RT_M;
	 
	 //RD1
	 assign RS_D = ( sel_RS_D == 3'b000 ) ? RD1 : ( sel_RS_D == 3'b001 ) ? PC8_E : ( sel_RS_D == 3'b010 ) ? ALU_M :( sel_RS_D == 3'b011 ) ? HILO_M :
			  ( sel_RS_D == 3'b100 ) ? PC8_M : WtDt ;
	 //RD2
	 assign RT_D = ( sel_RT_D == 3'b000 ) ? RD2 :( sel_RT_D == 3'b001 ) ? PC8_E :( sel_RT_D == 3'b010 ) ? ALU_M :( sel_RT_D == 3'b011 ) ? HILO_M :
			  ( sel_RT_D == 3'b100 ) ? PC8_M : WtDt ;
	//ALU1		  
	 assign RS_E = ( sel_RS_E == 3'b000 ) ? RD1_E :( sel_RS_E == 3'b010 ) ? ALU_M :( sel_RS_E == 3'b011 ) ? HILO_M :
			  ( sel_RS_E == 3'b100 ) ? PC8_M : WtDt ;
	//ALU2		  
	 assign RT_E = ( sel_RT_E == 3'b000 ) ? RD2_E :( sel_RT_E == 3'b010 ) ? ALU_M :( sel_RT_E == 3'b011 ) ? HILO_M :
			  ( sel_RT_E == 3'b100 ) ? PC8_M : WtDt ;
	 //WtDt		 
	 assign RT_M = sel_RT_M ? WtDt : RD2_M ;
			  
	 


endmodule
