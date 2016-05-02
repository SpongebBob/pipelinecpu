`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:41:08 12/18/2014
// Design Name:   BE
// Module Name:   C:/Documents and Settings/P6/P6/BE_tb.v
// Project Name:  P6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BE
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module BE_tb;

	// Inputs
	reg [1:0] st_signal;
	reg [1:0] offset;

	// Outputs
	wire [3:0] BE;

	// Instantiate the Unit Under Test (UUT)
	BE uut (
		.st_signal(st_signal), 
		.offset(offset), 
		.BE(BE)
	);

	initial begin
		// Initialize Inputs
		st_signal = 0;
		offset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

