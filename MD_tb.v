`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:45:40 12/12/2014
// Design Name:   MULDIV
// Module Name:   C:/Documents and Settings/P6/P6/MD_tb.v
// Project Name:  P6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MULDIV
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MD_tb;

	// Inputs
	reg reset;
	reg we;
	reg clk;
	reg HiLo;
	reg start;
	reg [1:0] op;
	reg [31:0] D1;
	reg [31:0] D2;

	// Outputs
	wire busy;
	wire [31:0] HI;
	wire [31:0] LO;

	// Instantiate the Unit Under Test (UUT)
	MULDIV uut (
		.reset(reset), 
		.we(we), 
		.clk(clk), 
		.HiLo(HiLo), 
		.start(start), 
		.op(op), 
		.D1(D1), 
		.D2(D2), 
		.busy(busy), 
		.HI(HI), 
		.LO(LO)
	);

	initial begin
		// Initialize Inputs
		reset = 1;
		we = 0;
		clk = 0;
		HiLo = 0;
		start = 0;
		op = 0;
		D1 = 0;
		D2 = 0;
		
		#5  start = 1;
		 reset = 0;
		 op = 1;
		 D1 = 100;
		 D2 = 100;
		 
		 #10 start = 0;
		   D1 = 0;
		   D2 = 0;
		 
		end
		 always #5 clk=~clk;
		// Wait 100 ns for global reset to finish
        
		// Add stimulus here

	      
endmodule

