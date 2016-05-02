`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:00:29 12/10/2014 
// Design Name: 
// Module Name:    DM 
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
module DM(
    input reset,
    input we,
    input clk,
    input [3:0] BE,
    input [12:2] A,
    input [31:0] WD,
	 
    output [31:0] RD
    );
	 
	 reg[31:0] dm[0:2047];
	 assign RD = dm[A];
	 integer i;
	 always @(posedge reset) 
		for(i=0;i<2048;i=i+1) 
				dm[i]=0;//³õÊ¼»¯
	 always @(posedge clk)
		if(we)
			begin
				case (BE)
					4'b1111: dm[A] <= WD ;
					4'b0011: dm[A][15:0] <= WD[15:0] ;
					4'b1100: dm[A][31:16] <= WD[15:0] ;
					4'b0001: dm[A][7:0] <= WD[7:0] ;
					4'b0010: dm[A][15:8] <= WD[7:0] ;
					4'b0100: dm[A][23:16] <= WD[7:0] ;
					4'b1000: dm[A][31:24] <= WD[7:0] ;
				endcase
			end

endmodule