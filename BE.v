`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:51:22 12/10/2014 
// Design Name: 
// Module Name:    BE 
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
module BE(st_signal,offset,BE
    );
	 input [1:0] st_signal;
    input [1:0] offset;
    output [3:0] BE;

		assign BE = ( st_signal == 2'b00 )? 4'b1111 : 
						( st_signal == 2'b01 && offset == 2'b00 )? 	4'b0011:
						( st_signal == 2'b01 && offset == 2'b10 ) ?  4'b1100 :
						( st_signal == 2'b10 && offset == 2'b00 ) ?	4'b0001 :
						( st_signal == 2'b10 && offset == 2'b01 ) ?	4'b0010 :
						( st_signal == 2'b10 && offset == 2'b10 ) ?	4'b0100 :
						( st_signal == 2'b10 && offset == 2'b11 ) ?	4'b1000 : 0;
						
						

endmodule
