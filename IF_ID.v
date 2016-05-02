`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:05:16 12/10/2014 
// Design Name: 
// Module Name:    IF_ID 
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
module IF_ID( enable , clk , IF_in , ADD4_in , IR_D_out , PC4_D_out);
	 input enable;
	 input clk;
    input [31:0] IF_in;
    input [31:0] ADD4_in;
	 
    output [31:0] IR_D_out;
    output [31:0] PC4_D_out;
	 
	 initial IR_D_out = 0 ;
	 
	 reg[31:0] IR_D_out , PC4_D_out ;
	 
	 always @(posedge clk)
		if(enable)
			begin
				IR_D_out <= IF_in ;
				PC4_D_out <= ADD4_in ;
			end

endmodule
