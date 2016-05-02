`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:17:31 12/10/2014 
// Design Name: 
// Module Name:    EXT 
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
module EXT(
    input [15:0] imm,
	 input Extop,
    output [31:0] imm_ext
    );
	 assign imm_ext = Extop? {16'd0,imm} : {{16{imm[15]}}, imm};//lui,sw,lw 0:zero,1:sign.
endmodule
