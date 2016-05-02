`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:39:47 12/10/2014 
// Design Name: 
// Module Name:    MULTDIV 
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
module MULDIV( reset, we, clk, HiLo, Start, op, D1, D2, Busy, HI, LO );

	 input reset;
    input we;
    input clk;
    input HiLo;
    input Start;
    input [1:0] op;
    input [31:0] D1;
    input [31:0] D2;
	 
    output Busy;
    output [31:0] HI;
    output [31:0] LO;
	 
	 wire signed [31:0] D1 , D2 ;
	 
	// reg[4:0] counter; 
	// reg[1:0] optemp;
	 reg[31:0] HI,LO;
	 reg Busy;
	 //reg[63:0] temp;
	 reg[31:0] q,r;
	 
	 //reset
 
    reg [63:0] multy_div;
    reg [3:0]  count;
   
    initial
    begin
        count <= 4'b0000;
        multy_div <= 0;
        Busy <= 0;
        HI <= 0;
        LO <= 0;
    end
    
    always @ ( posedge clk )
    begin
        if( reset )
        begin
            HI <= 31'b0;
            LO <= 31'b0;
            Busy <= 0;
        end
        
        if( Start )
        begin
            if( op == 0 )
            begin
                count <= 5;
                multy_div <= {1'b0, D1} * {1'b0, D2};
            end
            else if( op == 1 )
            begin
                count <= 5;
                multy_div <= D1 * D2;
            end
            else if( op == 2 )
            begin
                count <= 10;
                multy_div[31:0] <= {{1'b0, D1} / {1'b0, D2}};
                multy_div[63:32] <={{1'b0, D1} % {1'b0, D2}};
            end
            else if( op == 3 )
            begin
                count <= 10;
                multy_div <= {D1 % D2, D1 / D2};
            end   
            Busy <= 1;
        end
        
        if( Busy == 1 )
        begin
            count <= count - 1; 
        end
        
        if( count == 1 )
        begin
            HI <= multy_div[63:32];
            LO <= multy_div[31:0];
            Busy <= 0;
        end
        
        if( we )
        begin
            if( HiLo == 0 )
                LO <= D1;
            else if( HiLo == 1 )
                HI <= D1;
        end
        
    end

endmodule
