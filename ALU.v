`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:22:02 12/10/2014 
// Design Name: 
// Module Name:    ALU 
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
module ALU(ALUop , A , B , C);

	 input [3:0] ALUop;
    input [31:0] A;
    input [31:0] B;
    output [31:0] C;
	 
	 reg [32:0] temp;
	 reg over;
	 reg [31:0] C;
	 wire signed [31:0] A,B;
	 wire signed [32:0] tempA,tempB;
	 assign tempA = { 1'b0 , A } ;
	 assign tempB = { 1'b0 , B } ;
	 
	 //wire [31:0] add,sub;
	// wire [32:0] tempadd,tempsub;
	// assign tempadd = { A[31] , A } + { B[31] , B } ;
	// assign tempsub = { A[31] , A } - { B[31] , B } ;
	 
	 always @(A,B,ALUop)
	 begin
		over = 1'b0;
		C = 0;
		temp = 33'd0;
		case (ALUop)
		//溢出相关
			4'b0000://add&addu
				begin
					temp = { A[31] , A } + { B[31] , B } ; //扩展为33位。33位与32wei结果不同则溢出
					C = temp[31:0];
					if( temp[32] != temp[31] )
						over = 1'b1;
				end
			4'b0001://sub&subu
				begin
					temp = { A[31] , A } - { B[31] , B } ;
					C = temp[31:0];
					if( temp[32] != temp[31] )
						over = 1'b1;
				end
			4'b1101://slt slti
				begin
					if(A < B) C = { 31'd0 , 1 } ;
					else C = 0 ;
				end
			4'b1110://unsigned(sltu sltiu)
				begin
					if( tempA < tempB)  C = { 31'd0 , 1 } ;
					else C = 0 ;
				end
		//溢出无关
			4'b0010://and
				C = A & B ;
			4'b0011://or
				C = A | B ;
			4'b0100://xor
				C = A ^ B ;
			4'b0101://lui
				C = B << 16 ;
			4'b0110://nor
				C = ~ ( A | B ) ;
			4'b0111://sll
				C = B << A[10:6] ;
			4'b1000://srl
				C = B >> A[10:6] ;
			4'b1001://sra 
				C = B[31] ? ( ~ ( (~B) >> A[10:6] ) ) : ( B >> A[10:6] ) ;
			4'b1010://sllv
				C = B << A[4:0] ;
			4'b1011://srlv
				C = B >> A[4:0] ;
			4'b1100://srav
				C = B[31] ? ( ~ ( (~B) >> A[4:0] ) ) : ( B >> A[4:0] ) ;

		
		endcase
	 end


endmodule

