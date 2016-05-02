`timescale 1ns / 1ps

module ADD4( PC , PCADD4 );
	 input [31:0] PC ;
    output [31:0] PCADD4 ; 
	 assign PCADD4 = PC + 4 ;
endmodule

