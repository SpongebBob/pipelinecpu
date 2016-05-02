`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:02:58 12/10/2014 
// Design Name: 
// Module Name:    EXE_WB 
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
module MEM_WB(
clk, 
IR_M, PC8_M, ALU_M, DM,  HILO_M,
IR_W, PC8_W, ALU_W, DM_W,HILO_W  
    );
	 
	 input clk;
    input [31:0] IR_M;
    input [31:0] PC8_M;
    input [31:0] ALU_M;
	 input [31:0] DM;
	 input [31:0] HILO_M;
    
    output [31:0] IR_W;
	 output [31:0] PC8_W;
    output [31:0] ALU_W;
    output [31:0] DM_W;
    output [31:0] HILO_W; 
	 
	 initial
		IR_W = 0 ;
		
	 reg [31:0] IR_W , PC8_W , ALU_W , DM_W , HILO_W ; 
	 always @(posedge clk)
		begin
			IR_W <= IR_M ;
			PC8_W <= PC8_M ;
			ALU_W <= ALU_M ;
			DM_W <= DM ;
			HILO_W <= HILO_M ;
		end

endmodule
