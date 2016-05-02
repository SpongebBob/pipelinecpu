`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:26:09 12/13/2014
// Design Name:   MIPS
// Module Name:   C:/Documents and Settings/P6/P6/MIPS_tb.v
// Project Name:  P6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MIPS
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MIPS_tb;

	// Inputs
	reg clk;
	reg reset;

	// Instantiate the Unit Under Test (UUT)
	MIPS uut (
		.clk(clk), 
		.reset(reset)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		#1 reset = 1 ;
		#2 reset = 0 ;
		// Wait 100 ns for global reset to finis
        
		// Add stimulus here

	end
      always #5 clk=~clk;
endmodule

