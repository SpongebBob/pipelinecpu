`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:39:06 12/11/2014 
// Design Name: 
// Module Name:    DM_EXT 
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
module DM_EXT(
 op, A, DM_in, DMout
    );
    input [2:0] op;
    input [1:0] A;
    input [31:0] DM_in;
    output [31:0] DMout;
	 
			assign DMout = (op == 3'b000) ? DM_in :
                        (op == 3'b001 && A== 2'b00) ? {24'h000000, DM_in[7:0]  } :
                        (op == 3'b001 && A== 2'b01) ? {24'h000000, DM_in[15:8] } :
                        (op == 3'b001 && A== 2'b10) ? {24'h000000, DM_in[23:16]} :
                        (op == 3'b001 && A== 2'b11) ? {24'h000000, DM_in[31:24]} :
                        (op == 3'b010 && A== 2'b00) ? { {24{DM_in[7]}  }, DM_in[7:0]}   :
                        (op == 3'b010 && A== 2'b01) ? { {24{DM_in[15]} }, DM_in[15:8]}  :
                        (op == 3'b010 && A== 2'b10) ? { {24{DM_in[23]} }, DM_in[23:16]} :
                        (op == 3'b010 && A== 2'b11) ? { {24{DM_in[31]} }, DM_in[31:24]} :
                        (op == 3'b011 && A[1] == 1'b0) ? {16'h0000, DM_in[15:0] } :
                        (op == 3'b011 && A[1] == 1'b1) ? {16'h0000, DM_in[31:16]} :
                        (op == 3'b100 && A[1] == 1'b0) ? { {16{DM_in[15]}}, DM_in[15:0]}  :
                        (op == 3'b100 && A[1] == 1'b1) ? { {16{DM_in[31]}}, DM_in[31:16]} :
                        32'h0;                 
endmodule

