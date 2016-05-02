`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:20:00 12/10/2014 
// Design Name: 
// Module Name:    NPC 
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
module NPC( NPCop , immext , PCADD4_ID_out , NEWPC_bj);
	 input  NPCop ;
	 input [31:0] immext;
	 input [31:0] PCADD4_ID_out;
	 output [31:0] NEWPC_bj;
	 
	 assign  NEWPC_bj = ( NPCop == 0 ) ? ( PCADD4_ID_out+ (immext<<2) ) : //b type
												 {PCADD4_ID_out[31:28],(immext[25:0]<<2)} ;//j & jal 
												 
												 // GPR_RD1 ; jr && jalr  在多路选择中解决
	 
endmodule