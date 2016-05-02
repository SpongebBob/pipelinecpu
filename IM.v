`timescale 1ns / 1ps

module IM(PC,instr);
	  input [31:0] PC;
     output [31:0] instr;
	  reg[31:0] im[1024:3071];
	initial
	$readmemh("code.txt",im,1024,3071);
	 assign instr = im[PC[12:2]];

endmodule

