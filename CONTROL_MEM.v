`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:38:53 12/10/2014 
// Design Name: 
// Module Name:    CONTROL_MEM 
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
module CONTROL_MEM(
    input [31:0] IR_M,
    output we_DM,
    output [1:0] st_sig
    );
	 
	 wire sb_M , sh_M , sw_M ;
	 assign sb_M = IR_M[31:26] == 6'b101000 ;
	 assign sh_M = IR_M[31:26] == 6'b101001 ;
	 assign sw_M = IR_M[31:26] == 6'b101011 ;
	 
	 assign we_DM = sb_M | sh_M | sw_M ;
	 
	 assign st_sig[0] =  sh_M  ;
	 
	 assign st_sig[1] =  sb_M ;

endmodule
