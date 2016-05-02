`timescale 1ns / 1ps


`define op 31:26
`define funct 5:0
`define RS 25:21
`define RT 20:16
`define RD 15:11


module CONTROL_EX(
    input [31:0] IR_E,
	 
    output ALUAsel,
    output ALUBsel,
    output HILOsel,
    output [3:0] ALUop,
    output MULTDIVwe,
    output HiLo,
    output start,
    output [1:0] MULTDIVop
    );
	 
			//ALUA_sel
			wire sll_E , srl_E , sra_E , sllv_E , srlv_E , srav_E ;//shift
			//shift
			assign sll_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b000000 ) && ( IR_E != 0 );
			assign srl_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b000010 ) ;
			assign sra_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b000011 ) ;
			assign sllv_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b000100 ) ;
			assign srlv_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b000110 ) ;
			assign srav_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b000111 ) ;

			wire add_E , addu_E , sub_E , subu_E , and_E , or_E , xor_E , nor_E ;
			//r_cal
			assign add_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b100000 ) ;
			assign addu_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b100001 ) ;
			assign sub_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b100010 ) ;
			assign subu_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b100011 ) ;
			assign and_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b100100 ) ;
			assign or_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b100101 ) ;
			assign xor_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b100110 ) ;
			assign nor_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b100111 ) ;
			
			wire slt_E , slti_E , sltiu_E , sltu_E ;//set
			
			assign slt_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b101010 ) ;
			assign slti_E = IR_E[`op] == 6'b001010 ;
			assign sltiu_E = IR_E[`op] == 6'b001011 ;
			assign sltu_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b101011 ) ;
		
			wire mfhi_E , mflo_E , mthi_E , mtlo_E ;//movehilo
			//movehilo
			assign mfhi_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b010000 ) ;
			assign mflo_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b010010 ) ;
			assign mthi_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b010001 ) ;
			assign mtlo_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b010011 ) ;
				 
			//ALUop
			wire addi_E , addiu_E , andi_E , ori_E , xori_E , lui_E ;//i_cal
			//i_cal
			assign addi_E = IR_E[`op] == 6'b001000 ;
			assign addiu_E = IR_E[`op] == 6'b001001 ;
			assign andi_E = IR_E[`op] == 6'b001100 ;
			assign ori_E = IR_E[`op] == 6'b001101 ;
			assign xori_E = IR_E[`op] == 6'b001110 ;
			assign lui_E = IR_E[`op] == 6'b001111 ;
			 //start  
			wire mult_E , multu_E , div_E , divu_E ;//muldiv
			//muldiv
			assign mult_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b011000 ) ;
			assign multu_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b011001 ) ;
			assign div_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b011010 ) ;
			assign divu_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b011011 ) ;
	 
			wire calr_E ;
			wire shiftrt_E;
			
			assign calr_E =   add_E | addu_E | sub_E | subu_E | and_E | or_E | xor_E | nor_E  ;
			assign shiftrt_E = sll_E | srl_E | sra_E | sllv_E | srlv_E | srav_E ;
			
			assign ALUAsel = sll_E | srl_E | sra_E ;
			assign ALUBsel = calr_E | shiftrt_E| ( slt_E | sltu_E ) ;
		   assign HILOsel = mflo_E ;//¶Á¼Ä´æÆ÷Ñ¡Ôñ
			assign ALUop[3] = ( srl_E | sra_E | sllv_E | srlv_E | srav_E ) | ( slt_E | slti_E | sltiu_E | sltu_E ) ;					  
			assign ALUop[2] = xori_E | xor_E | lui_E | nor_E | sll_E | srav_E | slt_E | slti_E | sltu_E | sltiu_E ; 
			assign ALUop[1] = andi_E | and_E | ori_E | or_E | nor_E | sll_E | sllv_E | srlv_E | sltu_E | sltiu_E ;
			assign ALUop[0] = sub_E | subu_E | ori_E | or_E | lui_E | sll_E | sra_E | srlv_E | slt_E | slti_E ;
			assign MULTDIVwe = mtlo_E | mthi_E ;
			assign HiLo = mthi_E ;	
			assign start = mult_E | multu_E | div_E | divu_E ;	
			 //00:multu : 01 :mult 10 divu 11 div			 
			assign MULTDIVop[1] = ( div_E | divu_E );
			assign MULTDIVop[0] = ( mult_E | div_E ) ;
endmodule