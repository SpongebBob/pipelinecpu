`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:56:18 12/10/2014 
// Design Name: 
// Module Name:    CMP 
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
module CMP( CMPop , A , B , cmpresult );

	 input [2:0] CMPop;
    input [31:0] A;
    input [31:0] B;
    output cmpresult;

	 	 assign cmpresult = (CMPop == 0) ? ( (A == B) ? 1 : 0 ) :
                 (CMPop == 1) ? ( (A != B) ? 1 : 0 ) :
                 (CMPop == 2) ? ( (( A[31] == 1'b1 ) || ( A == 0 )  ) ? 1 : 0 ) :
                 (CMPop == 3) ? ( (( A[31] == 1'b0 ) && ( A != 0 ) )? 1 : 0 ) :
                 (CMPop == 4) ? ( (A[31] == 1'b1) ? 1 : 0 ) :
                 (CMPop == 5) ? ( (A[31] == 1'b0 ) ? 1 : 0 ) :
                 0;

endmodule