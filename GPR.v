`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:12:57 12/10/2014 
// Design Name: 
// Module Name:    GPR 
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
module GPRs(A1,A2,A3,WD,we,clk,reset,RD1,RD2);
    integer i;
	 input [4:0] A1;
    input [4:0] A2;
    input [4:0] A3;
    input [31:0] WD;
    input we;
	 input clk;
	 input reset;
    output [31:0] RD1;
    output [31:0] RD2;
	 reg[31:0] GPR[31:0];
	 
	  
		assign RD1=(A1==0)?0:GPR[A1];
		assign RD2=(A2==0)?0:GPR[A2];
	 
	 
	 always @(negedge clk)//下跳延写，可以取消读写冲突转发的
	 
	 begin
		if(we&&A3!=0)
			GPR[A3]<=WD;
	  end
	  
	  always @(posedge reset) for(i=0;i<32;i=i+1) GPR[i]=0;
	
endmodule