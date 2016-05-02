`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:22:05 12/12/2014
// Design Name:   ALU
// Module Name:   C:/Documents and Settings/P6/P6/ALU_tb.v
// Project Name:  P6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_tb;

	// Inputs
	reg [3:0] ALUop;
	reg [31:0] A;
	reg [31:0] B;

	// Outputs
	wire over;
	wire [31:0] C;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.ALUop(ALUop), 
		.A(A), 
		.B(B), 
		.over(over), 
		.C(C)
	);

	initial begin
		// Initialize Inputs
		ALUop = 0;
		A = 0;
		B = 0;
		#10 ALUop = 1101;
		#10 A=10;
		#10 B=2;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

