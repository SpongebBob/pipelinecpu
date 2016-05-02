`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:40:00 12/10/2014 
// Design Name: 
// Module Name:    IR_MEM 
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

module EX_MEM(
clk, IR_E, PC8_E , ALU, HILO_E , RT_E , IR_M , PC8_M , ALU_M , HILO_M , RD2_M
);
	 
	 input clk;
    input [31:0] IR_E;
    input [31:0] PC8_E;
    input [31:0] ALU;
    input [31:0] HILO_E;
    input [31:0] RT_E;
    
    output [31:0] IR_M;
    output [31:0] PC8_M;
    output [31:0] ALU_M;
    output [31:0] HILO_M;
    output [31:0] RD2_M;
	 
	 initial
		IR_M = 0 ;
	 
	 reg [31:0] IR_M , PC8_M , ALU_M , HILO_M , RD2_M ;
	 
	 always @(posedge clk)
		begin
			IR_M <= IR_E ;
			PC8_M <= PC8_E ;
			ALU_M <= ALU ;
			HILO_M <= HILO_E ;
			RD2_M <= RT_E ;
		end 
endmodule