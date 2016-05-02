`timescale 1ns / 1ps
module PC( reset , enable , clk , NEWPC , PC );

	 input reset;
    input enable;
    input clk;
    input [31:0] NEWPC;
    output [31:0] PC;
	 
	 initial begin 
		PC<=30'b11_00000_00000;
		end
	 
	 reg[31:0] PC;
	 
	 always @( reset )
		if( reset )
			PC <= 32'h00003000 ;
			
	 always @( posedge clk )
	   if( enable && !reset )
			PC <= NEWPC ;
			
endmodule

