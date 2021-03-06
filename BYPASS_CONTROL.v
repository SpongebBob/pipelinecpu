`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:13:25 12/11/2014 
// Design Name: 
// Module Name:    BYPASS_CONTROL 
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

`define op 31:26
`define funct 5:0
`define RS 25:21
`define RT 20:16
`define RD 15:11

module BYPASS_CONTROL( IR_D,IR_E, IR_M, IR_W, RSsel_D, RTsel_D, RSsel_E,RTsel_E,RTsel_M);
	 
	 input [31:0] IR_D;
    input [31:0] IR_E;
    input [31:0] IR_M;
    input [31:0] IR_W;
    output [2:0] RSsel_D;
    output [2:0] RTsel_D;
    output [2:0] RSsel_E;
    output [2:0] RTsel_E;
    output RTsel_M;
	 //需求级寄存器
	 wire[4:0] RS_D , RT_D , RS_E , RT_E , RT_M ; 
	 //各级指令识别及指令大类
	 //ID级
	 wire beq_D , bne_D , blez_D , bgtz_D , bltz_D , bgez_D ;//btype
	 wire jalr_D , jr_D ;//jtype 
	 wire N_RS_D , N_RT_D ;
	 //EX级
	 wire lb_E , lbu_E , lh_E , lhu_E , lw_E ;//load
	 wire sb_E , sh_E , sw_E ;//store
	 wire add_E , addu_E , sub_E , subu_E , and_E , or_E , xor_E , nor_E ;//r_cal
	 wire addi_E , addiu_E , andi_E , ori_E , xori_E ;//i_cal
	 wire mult_E , multu_E , div_E , divu_E ;//muldiv
	 wire sll_E , srl_E , sra_E , sllv_E , srlv_E , srav_E ;//shift
	 wire slt_E , slti_E , sltiu_E , sltu_E ;//set
	 wire jal_E , jalr_E ;//jtype
	 wire mthi_E , mtlo_E ;//movehilo  	
	 //MEM
	 wire sb_M , sh_M , sw_M ;//store
	 wire add_M , addu_M , sub_M , subu_M , and_M , or_M , xor_M , nor_M ;//r_cal
	 wire addi_M , addiu_M , andi_M , ori_M , xori_M , lui_M ;//i_cal
	 wire sll_M , srl_M , sra_M , sllv_M , srlv_M , srav_M ;//shift
	 wire slt_M , slti_M , sltiu_M , sltu_M ;//set
	 wire jal_M , jalr_M ;//jtype
	 wire mfhi_M , mflo_M ;//movehilo  
	 wire RCAL_W , ICAL_W , SHIFT_W , SET_W , J_W , MF_W , LOAD_W;
	 
	 wire J_E ;
	 wire[4:0] RW_E , RW_M ,RW_W;
	 	 //MEM
	 wire RCAL_M , ICAL_M , SHIFT_M , SET_M , J_M , MF_M ;
	 	 //WB
	 wire lb_W , lbu_W , lh_W , lhu_W , lw_W ;//load
	 wire add_W , addu_W , sub_W , subu_W , and_W , or_W , xor_W , nor_W ;//r_cal
	 wire addi_W , addiu_W , andi_W , ori_W , xori_W , lui_W ;//i_cal
	 wire sll_W , srl_W , sra_W , sllv_W , srlv_W , srav_W ;//shift
	 wire slt_W , slti_W , sltiu_W , sltu_W ;//set
	 wire jal_W , jalr_W ;//jtype
	 wire mfhi_W , mflo_W ;//movehilo 
	 //指令识别模块。form : instr_REG;
	 //load
	 assign lb_E = IR_E[`op] == 6'b100000 ;
	 assign lbu_E = IR_E[`op] == 6'b100100 ;
	 assign lh_E = IR_E[`op] == 6'b100001 ;
	 assign lhu_E = IR_E[`op] == 6'b100101 ;
	 assign lw_E = IR_E[`op] == 6'b100011 ;
	 //store
	 assign sb_E = IR_E[`op] == 6'b101000 ;
	 assign sh_E = IR_E[`op] == 6'b101001 ;
	 assign sw_E = IR_E[`op] == 6'b101011 ;
	 //r_cal
	 assign add_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b100000 ) ;
	 assign addu_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b100001 ) ;
	 assign sub_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b100010 ) ;
	 assign subu_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b100011 ) ;
	 assign and_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b100100 ) ;
	 assign or_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b100101 ) ;
	 assign xor_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b100110 ) ;
	 assign nor_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b100111 ) ;
	 //i_cal
	 assign addi_E = IR_E[`op] == 6'b001000 ;
	 assign addiu_E = IR_E[`op] == 6'b001001 ;
	 assign andi_E = IR_E[`op] == 6'b001100 ;
	 assign ori_E = IR_E[`op] == 6'b001101 ;
	 assign xori_E = IR_E[`op] == 6'b001110 ;
	 //muldiv
	 assign mult_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b011000 ) ;
	 assign multu_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b011001 ) ;
	 assign div_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b011010 ) ;
	 assign divu_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b011011 ) ;
	 //shift
	 assign sll_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b000000 ) && ( IR_E != 0 );
	 assign srl_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b000010 ) ;
	 assign sra_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b000011 ) ;
	 assign sllv_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b000100 ) ;
	 assign srlv_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b000110 ) ;
	 assign srav_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b000111 ) ;
	 //set
	 //R and I
	 assign slt_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b101010 ) ;
	 assign slti_E = IR_E[`op] == 6'b001010 ;
	 assign sltiu_E = IR_E[`op] == 6'b001011 ;
	 assign sltu_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b101011 ) ;
	 //jtype
	 assign jal_E = IR_E[`op] == 6'b000011 ;
	 assign jalr_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b001001 ) ;
	 //movehilo
	 assign mthi_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b010001 ) ;
	 assign mtlo_E = ( IR_E[`op] == 6'b000000 ) && ( IR_E[`funct] == 6'b010011 ) ;
	 	 //load
	 assign lb_M = IR_M[`op] == 6'b100000 ;
	 assign lbu_M = IR_M[`op] == 6'b100100 ;
	 assign lh_M = IR_M[`op] == 6'b100001 ;
	 assign lhu_M = IR_M[`op] == 6'b100101 ;
	 assign lw_M = IR_M[`op] == 6'b100011 ;
	 //store
	 assign sb_M = IR_M[`op] == 6'b101000 ;
	 assign sh_M = IR_M[`op] == 6'b101001 ;
	 assign sw_M = IR_M[`op] == 6'b101011 ;
	 //r_cal
	 assign add_M = ( IR_M[`op] == 6'b000000 ) && ( IR_M[`funct] == 6'b100000 ) ;
	 assign addu_M = ( IR_M[`op] == 6'b000000 ) && ( IR_M[`funct] == 6'b100001 ) ;
	 assign sub_M = ( IR_M[`op] == 6'b000000 ) && ( IR_M[`funct] == 6'b100010 ) ;
	 assign subu_M = ( IR_M[`op] == 6'b000000 ) && ( IR_M[`funct] == 6'b100011 ) ;
	 assign and_M = ( IR_M[`op] == 6'b000000 ) && ( IR_M[`funct] == 6'b100100 ) ;
	 assign or_M = ( IR_M[`op] == 6'b000000 ) && ( IR_M[`funct] == 6'b100101 ) ;
	 assign xor_M = ( IR_M[`op] == 6'b000000 ) && ( IR_M[`funct] == 6'b100110 ) ;
	 assign nor_M = ( IR_M[`op] == 6'b000000 ) && ( IR_M[`funct] == 6'b100111 ) ;
	 //i_cal
	 assign addi_M = IR_M[`op] == 6'b001000 ;
	 assign addiu_M = IR_M[`op] == 6'b001001 ;
	 assign andi_M = IR_M[`op] == 6'b001100 ;
	 assign ori_M = IR_M[`op] == 6'b001101 ;
	 assign xori_M = IR_M[`op] == 6'b001110 ;
	 assign lui_M = IR_M[`op] == 6'b001111 ;
	 //shift
	 assign sll_M = ( IR_M[`op] == 6'b000000 ) && ( IR_M[`funct] == 6'b000000 ) && ( IR_M != 0 ) ;
	 assign srl_M = ( IR_M[`op] == 6'b000000 ) && ( IR_M[`funct] == 6'b000010 ) ;
	 assign sra_M = ( IR_M[`op] == 6'b000000 ) && ( IR_M[`funct] == 6'b000011 ) ;
	 assign sllv_M = ( IR_M[`op] == 6'b000000 ) && ( IR_M[`funct] == 6'b000100 ) ;
	 assign srlv_M = ( IR_M[`op] == 6'b000000 ) && ( IR_M[`funct] == 6'b000110 ) ;
	 assign srav_M = ( IR_M[`op] == 6'b000000 ) && ( IR_M[`funct] == 6'b000111 ) ;
	 //set
	 assign slt_M = ( IR_M[`op] == 6'b000000 ) && ( IR_M[`funct] == 6'b101010 ) ;
	 assign slti_M = IR_M[`op] == 6'b001010 ;
	 assign sltiu_M = IR_M[`op] == 6'b001011 ;
	 assign sltu_M = ( IR_M[`op] == 6'b000000 ) && ( IR_M[`funct] == 6'b101011 ) ;
	 //jtype
	 assign jal_M = IR_M[`op] == 6'b000011 ;
	 assign jalr_M = ( IR_M[`op] == 6'b000000 ) && ( IR_M[`funct] == 6'b001001 ) ;
	 //movehilo
	 assign mfhi_M = ( IR_M[`op] == 6'b000000 ) && ( IR_M[`funct] == 6'b010000 ) ;
	 assign mflo_M = ( IR_M[`op] == 6'b000000 ) && ( IR_M[`funct] == 6'b010010 ) ;
	 //load
	 assign lb_W = IR_W[`op] == 6'b100000 ;
	 assign lbu_W = IR_W[`op] == 6'b100100 ;
	 assign lh_W = IR_W[`op] == 6'b100001 ;
	 assign lhu_W = IR_W[`op] == 6'b100101 ;
	 assign lw_W = IR_W[`op] == 6'b100011 ;
	 //r_cal
	 assign add_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b100000 ) ;
	 assign addu_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b100001 ) ;
	 assign sub_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b100010 ) ;
	 assign subu_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b100011 ) ;
	 assign and_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b100100 ) ;
	 assign or_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b100101 ) ;
	 assign xor_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b100110 ) ;
	 assign nor_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b100111 ) ;
	 //i_cal
	 assign addi_W = IR_W[`op] == 6'b001000 ;
	 assign addiu_W = IR_W[`op] == 6'b001001 ;
	 assign andi_W = IR_W[`op] == 6'b001100 ;
	 assign ori_W = IR_W[`op] == 6'b001101 ;
	 assign xori_W = IR_W[`op] == 6'b001110 ;
	 assign lui_W = IR_W[`op] == 6'b001111 ;
	 //shift
	 assign sll_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b000000 ) && ( IR_W != 0 ) ;
	 assign srl_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b000010 ) ;
	 assign sra_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b000011 ) ;
	 assign sllv_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b000100 ) ;
	 assign srlv_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b000110 ) ;
	 assign srav_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b000111 ) ;
	 //set
	 assign slt_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b101010 ) ;
	 assign slti_W = IR_W[`op] == 6'b001010 ;
	 assign sltiu_W = IR_W[`op] == 6'b001011 ;
	 assign sltu_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b101011 ) ;
	 //jtype
	 assign jal_W = IR_W[`op] == 6'b000011 ;
	 assign jalr_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b001001 ) ;
	 //movehilo
	 assign mfhi_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b010000 ) ;
	 assign mflo_W = ( IR_W[`op] == 6'b000000 ) && ( IR_W[`funct] == 6'b010010 ) ;
	 	 //btype
	 assign beq_D = IR_D[`op] == 6'b000100 ;
	 assign bne_D = IR_D[`op] == 6'b000101 ;
	 assign blez_D = IR_D[`op] == 6'b000110 ;
	 assign bgtz_D = IR_D[`op] == 6'b000111 ;
	 assign bltz_D = ( IR_D[`op] == 6'b000001 ) && ( IR_D[`RT] == 5'b00000 ) ;
	 assign bgez_D = ( IR_D[`op] == 6'b000001 ) && ( IR_D[`RT] == 5'b00001 ) ;
	 //jtype
	 assign jalr_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b001001 ) ;
	 assign jr_D = ( IR_D[`op] == 6'b000000 ) && ( IR_D[`funct] == 6'b001000 ) ;
	 //
	 assign RS_D = IR_D[`RS] ;
	 assign RT_D = IR_D[`RT] ;
	 assign RS_E = IR_E[`RS] ;
	 assign RT_E = IR_E[`RT] ;
	 assign RT_M = IR_M[`RT] ;
	 	 
	 
	 //需求大类
	 //D B1 and B2;
	 wire B1_D;
	 assign B1_D = ( beq_D | bne_D | blez_D | bgtz_D | bltz_D | bgez_D ) ;
	 wire B2_D;
	 assign B2_D =  beq_D | bne_D ;
	 
	 
	 
	 //Tuse = 0 for D	 
	 assign N_RS_D = B1_D | jr_D | jalr_D ;					
	 assign N_RT_D = B2_D ;
	 
	 //指令大类
	 wire Load_E;
	 assign Load_E = lb_E | lbu_E | lh_E | lhu_E | lw_E ;
	 wire Store_E;
	 assign Store_E =  sb_E | sh_E | sw_E ;
	 wire CalR_E;
	 assign CalR_E = ( add_E | addu_E | sub_E | subu_E | and_E | or_E | xor_E | nor_E ) ;
	 wire CalI_E ;
	 assign CalI_E = addi_E | addiu_E | andi_E | ori_E | xori_E ;
	 wire MtDv_E;
	 assign MtDv_E = ( mult_E | multu_E | div_E | divu_E ) ;
	 wire Set_E ;
	 assign Set_E = ( slt_E | slti_E | sltiu_E | sltu_E );
	 wire ShiftRS_E;
	 assign ShiftRS_E =  ( sllv_E | srlv_E | srav_E );
	 wire ShiftRt_E ;
	 assign ShiftRt_E =( sll_E | srl_E | sra_E | sllv_E | srlv_E | srav_E );
	 //T use = 1 
	 assign N_RS_E = Load_E | Store_E | CalR_E  | CalI_E  | ShiftRS_E  | MtDv_E  | Set_E  | ( mthi_E | mtlo_E ) ;			 
	 assign N_RT_E = Store_E | CalR_E | ShiftRt_E | MtDv_E | ( slt_E | sltu_E ) ;

	//Tuse = 2
	 assign N_RT_M = sb_M | sh_M | sw_M ;	 
	 
	 //EX级提供回写来源
	 
	 assign J_E = jal_E | jalr_E ;

	 // Tnew = 0
	 //MEM级提供回写开源，大类综合
	 assign SET_M = slt_M | slti_M | sltiu_M | sltu_M ;
	 assign J_M = jal_M | jalr_M ;
	 assign MF_M = mfhi_M | mflo_M ;
	 assign RCAL_M = add_M | addu_M | sub_M | subu_M | and_M | or_M | xor_M | nor_M ;
	 assign ICAL_M = addi_M | addiu_M | andi_M | ori_M | xori_M | lui_M ;
	 assign SHIFT_M = sll_M | srl_M | sra_M | sllv_M | srlv_M | srav_M ;

	 

	 //Tnew = 0
	 //WB级提供回写来源，大类综合
	 assign J_W = jal_W | jalr_W ;
	 assign MF_W = mfhi_W | mflo_W ;
	 assign LOAD_W = lb_W | lbu_W | lh_W | lhu_W | lw_W ;
	 assign RCAL_W = add_W | addu_W | sub_W | subu_W | and_W | or_W | xor_W | nor_W ;
	 assign ICAL_W = addi_W | addiu_W | andi_W | ori_W | xori_W | lui_W ;
	 assign SHIFT_W = sll_W | srl_W | sra_W | sllv_W | srlv_W | srav_W ;
	 assign SET_W = slt_W | slti_W | sltiu_W | sltu_W ;

	 
	 //M级提供回写开源ALU，final
	 wire G_RW_M;
	 assign G_RW_M =( RCAL_M | ICAL_M | SHIFT_M | SET_M );
	 
	 //W级提供回写来源WD，final
	 wire G_RW_W ;
	 assign G_RW_W = ( LOAD_W | RCAL_W | ICAL_W | SHIFT_W | SET_W | MF_W | J_W ) ;
	 					
	
	//回写冲突寄存器
	 assign RW_E = jal_E ? 5'd31 : jalr_E ? IR_E[`RD] : 5'd0 ;
	 assign RW_M = ( RCAL_M | MF_M | SHIFT_M | slt_M | sltu_M | jalr_M ) ? IR_M[`RD] : jal_M ? 5'd31  : IR_M[`RT];
	 assign RW_W = ( RCAL_W | MF_W | SHIFT_W | slt_W | sltu_W | jalr_W ) ? IR_W[`RD] : jal_W ? 5'd31  : IR_W[`RT];	 

	  ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //means M级需求冲突  1：WD 0：RT_M
	 assign RTsel_M = ( RW_W==RT_M & N_RT_M & G_RW_W ) ? 1'b1 : 1'b0 ;
												
	
		//means E级需求冲突 
	 assign RSsel_E =( RW_M == RS_E & N_RS_E & G_RW_M ) ? 3'b010 // ALU_M
							: ( RW_M==RS_E & N_RS_E & MF_M ) ? 3'b011 // HILO_M
							: ( RW_M==RS_E & N_RS_E & J_M  ) ? 3'b100 // PC+8_M
							: ( RW_W==RS_E & N_RS_E & G_RW_W ) ? 3'b101 : 3'b000 ;
							// WD
							
	 assign RTsel_E =(  RW_M == RT_E & G_RW_M & N_RT_E ) ? 3'b010//同上
							: (  RW_M==RT_E & N_RT_E & MF_M ) ? 3'b011
							: (  RW_M==RT_E & N_RT_E & J_M ) ? 3'b100
							: ( RW_W==RT_E & N_RT_E & G_RW_W  ) ? 3'b101 : 3'b000 ;

	
	
	 //means D级需求冲突
	 assign RSsel_D = ( RW_E==RS_D &  N_RS_D & J_E ) ? 3'b001 // E级抓发 PC8_E
							: (   RW_M == RS_D & N_RS_D & G_RW_M ) ? 3'b010 //M级 转发 ALU_M
							: ( RW_M==RS_D & N_RS_D & MF_M  ) ? 3'b011 // M级 转发 HILO_M
							: (  RW_M==RS_D & N_RS_D & J_M ) ? 3'b100 // PC8_M  
							: (  RW_W==RS_D & N_RS_D & G_RW_W  ) ? 3'b101 //WD
							: 3'b000 ; 
							//W 转发 WD
	 assign RTsel_D = (  RW_E==RT_D & N_RT_D & J_E  ) ? 3'b001 // 同上
							: (  RW_M == RT_D & N_RT_D & G_RW_M   ) ? 3'b010
							: (  RW_M==RT_D & N_RT_D & MF_M ) ? 3'b011
							: (  RW_M==RT_D & N_RT_D & J_M  ) ? 3'b100
							: (  RW_W==RT_D & N_RT_D & G_RW_W ) ? 3'b101 : 3'b000 ;

							
	 
	

endmodule

