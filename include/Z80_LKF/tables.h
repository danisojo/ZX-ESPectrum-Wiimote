#ifndef Z80EMU_TABLES_H
#define Z80EMU_TABLES_H

#include "../hardconfig.h"
#ifdef CPU_LINKEFONG

/* Generated file, see maketables.c. */

static const unsigned char INSTRUCTION_TABLE[256] = {

	NOP,
	LD_RR_NN,
	LD_INDIRECT_BC_A,
	INC_RR,
	INC_R,
	DEC_R,
	LD_R_N,
	RLCA,

	EX_AF_AF_PRIME,
	ADD_HL_RR,
	LD_A_INDIRECT_BC,
	DEC_RR,
	INC_R,
	DEC_R,
	LD_R_N,
	RRCA,

	DJNZ_E,
	LD_RR_NN,
	LD_INDIRECT_DE_A,
	INC_RR,
	INC_R,
	DEC_R,
	LD_R_N,
	RLA,

	JR_E,
	ADD_HL_RR,
	LD_A_INDIRECT_DE,
	DEC_RR,
	INC_R,
	DEC_R,
	LD_R_N,
	RRA,

	JR_DD_E,
	LD_RR_NN,
	LD_INDIRECT_NN_HL,
	INC_RR,
	INC_R,
	DEC_R,
	LD_R_N,
	DAA,

	JR_DD_E,
	ADD_HL_RR,
	LD_HL_INDIRECT_NN,
	DEC_RR,
	INC_R,
	DEC_R,
	LD_R_N,
	CPL,

	JR_DD_E,
	LD_RR_NN,
	LD_INDIRECT_NN_A,
	INC_RR,
	INC_INDIRECT_HL,
	DEC_INDIRECT_HL,
	LD_INDIRECT_HL_N,
	SCF,

	JR_DD_E,
	ADD_HL_RR,
	LD_A_INDIRECT_NN,
	DEC_RR,
	INC_R,
	DEC_R,
	LD_R_N,
	CCF,

	NOP,
	LD_R_R,
	LD_R_R,
	LD_R_R,
	LD_R_R,
	LD_R_R,
	LD_R_INDIRECT_HL,
	LD_R_R,

	LD_R_R,
	NOP,
	LD_R_R,
	LD_R_R,
	LD_R_R,
	LD_R_R,
	LD_R_INDIRECT_HL,
	LD_R_R,

	LD_R_R,
	LD_R_R,
	NOP,
	LD_R_R,
	LD_R_R,
	LD_R_R,
	LD_R_INDIRECT_HL,
	LD_R_R,

	LD_R_R,
	LD_R_R,
	LD_R_R,
	NOP,
	LD_R_R,
	LD_R_R,
	LD_R_INDIRECT_HL,
	LD_R_R,

	LD_R_R,
	LD_R_R,
	LD_R_R,
	LD_R_R,
	NOP,
	LD_R_R,
	LD_R_INDIRECT_HL,
	LD_R_R,

	LD_R_R,
	LD_R_R,
	LD_R_R,
	LD_R_R,
	LD_R_R,
	NOP,
	LD_R_INDIRECT_HL,
	LD_R_R,

	LD_INDIRECT_HL_R,
	LD_INDIRECT_HL_R,
	LD_INDIRECT_HL_R,
	LD_INDIRECT_HL_R,
	LD_INDIRECT_HL_R,
	LD_INDIRECT_HL_R,
	HALT,
	LD_INDIRECT_HL_R,

	LD_R_R,
	LD_R_R,
	LD_R_R,
	LD_R_R,
	LD_R_R,
	LD_R_R,
	LD_R_INDIRECT_HL,
	NOP,

	ADD_R,
	ADD_R,
	ADD_R,
	ADD_R,
	ADD_R,
	ADD_R,
	ADD_INDIRECT_HL,
	ADD_R,

	ADC_R,
	ADC_R,
	ADC_R,
	ADC_R,
	ADC_R,
	ADC_R,
	ADC_INDIRECT_HL,
	ADC_R,

	SUB_R,
	SUB_R,
	SUB_R,
	SUB_R,
	SUB_R,
	SUB_R,
	SUB_INDIRECT_HL,
	SUB_R,

	SBC_R,
	SBC_R,
	SBC_R,
	SBC_R,
	SBC_R,
	SBC_R,
	SBC_INDIRECT_HL,
	SBC_R,

	AND_R,
	AND_R,
	AND_R,
	AND_R,
	AND_R,
	AND_R,
	AND_INDIRECT_HL,
	AND_R,

	XOR_R,
	XOR_R,
	XOR_R,
	XOR_R,
	XOR_R,
	XOR_R,
	XOR_INDIRECT_HL,
	XOR_R,

	OR_R,
	OR_R,
	OR_R,
	OR_R,
	OR_R,
	OR_R,
	OR_INDIRECT_HL,
	OR_R,

	CP_R,
	CP_R,
	CP_R,
	CP_R,
	CP_R,
	CP_R,
	CP_INDIRECT_HL,
	CP_R,

	RET_CC,
	POP_SS,
	JP_CC_NN,
	JP_NN,
	CALL_CC_NN,
	PUSH_SS,
	ADD_N,
	RST_P,

	RET_CC,
	RET,
	JP_CC_NN,
	CB_PREFIX,
	CALL_CC_NN,
	CALL_NN,
	ADC_N,
	RST_P,

	RET_CC,
	POP_SS,
	JP_CC_NN,
	OUT_N_A,
	CALL_CC_NN,
	PUSH_SS,
	SUB_N,
	RST_P,

	RET_CC,
	EXX,
	JP_CC_NN,
	IN_A_N,
	CALL_CC_NN,
	DD_PREFIX,
	SBC_N,
	RST_P,

	RET_CC,
	POP_SS,
	JP_CC_NN,
	EX_INDIRECT_SP_HL,
	CALL_CC_NN,
	PUSH_SS,
	AND_N,
	RST_P,

	RET_CC,
	JP_HL,
	JP_CC_NN,
	EX_DE_HL,
	CALL_CC_NN,
	ED_PREFIX,
	XOR_N,
	RST_P,

	RET_CC,
	POP_SS,
	JP_CC_NN,
	DI,
	CALL_CC_NN,
	PUSH_SS,
	OR_N,
	RST_P,

	RET_CC,
	LD_SP_HL,
	JP_CC_NN,
	EI,
	CALL_CC_NN,
	FD_PREFIX,
	CP_N,
	RST_P,

};

static const unsigned char CB_INSTRUCTION_TABLE[256] = {

	RLC_R,
	RLC_R,
	RLC_R,
	RLC_R,
	RLC_R,
	RLC_R,
	RLC_INDIRECT_HL,
	RLC_R,

	RRC_R,
	RRC_R,
	RRC_R,
	RRC_R,
	RRC_R,
	RRC_R,
	RRC_INDIRECT_HL,
	RRC_R,

	RL_R,
	RL_R,
	RL_R,
	RL_R,
	RL_R,
	RL_R,
	RL_INDIRECT_HL,
	RL_R,

	RR_R,
	RR_R,
	RR_R,
	RR_R,
	RR_R,
	RR_R,
	RR_INDIRECT_HL,
	RR_R,

	SLA_R,
	SLA_R,
	SLA_R,
	SLA_R,
	SLA_R,
	SLA_R,
	SLA_INDIRECT_HL,
	SLA_R,

	SRA_R,
	SRA_R,
	SRA_R,
	SRA_R,
	SRA_R,
	SRA_R,
	SRA_INDIRECT_HL,
	SRA_R,

	SLL_R,
	SLL_R,
	SLL_R,
	SLL_R,
	SLL_R,
	SLL_R,
	SLL_INDIRECT_HL,
	SLL_R,

	SRL_R,
	SRL_R,
	SRL_R,
	SRL_R,
	SRL_R,
	SRL_R,
	SRL_INDIRECT_HL,
	SRL_R,

	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_INDIRECT_HL,
	BIT_B_R,

	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_INDIRECT_HL,
	BIT_B_R,

	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_INDIRECT_HL,
	BIT_B_R,

	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_INDIRECT_HL,
	BIT_B_R,

	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_INDIRECT_HL,
	BIT_B_R,

	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_INDIRECT_HL,
	BIT_B_R,

	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_INDIRECT_HL,
	BIT_B_R,

	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_R,
	BIT_B_INDIRECT_HL,
	BIT_B_R,

	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_INDIRECT_HL,
	RES_B_R,

	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_INDIRECT_HL,
	RES_B_R,

	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_INDIRECT_HL,
	RES_B_R,

	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_INDIRECT_HL,
	RES_B_R,

	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_INDIRECT_HL,
	RES_B_R,

	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_INDIRECT_HL,
	RES_B_R,

	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_INDIRECT_HL,
	RES_B_R,

	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_R,
	RES_B_INDIRECT_HL,
	RES_B_R,

	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_INDIRECT_HL,
	SET_B_R,

	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_INDIRECT_HL,
	SET_B_R,

	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_INDIRECT_HL,
	SET_B_R,

	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_INDIRECT_HL,
	SET_B_R,

	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_INDIRECT_HL,
	SET_B_R,

	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_INDIRECT_HL,
	SET_B_R,

	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_INDIRECT_HL,
	SET_B_R,

	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_R,
	SET_B_INDIRECT_HL,
	SET_B_R,

};

static const unsigned char ED_INSTRUCTION_TABLE[256] = {

	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,

	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,

	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,

	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,

	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,

	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,

	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,

	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,

	IN_R_C,
	OUT_C_R,
	SBC_HL_RR,
	LD_INDIRECT_NN_RR,
	NEG,
	RETI_RETN,
	IM_N,
	LD_I_A_LD_R_A,

	IN_R_C,
	OUT_C_R,
	ADC_HL_RR,
	LD_RR_INDIRECT_NN,
	NEG,
	RETI_RETN,
	IM_N,
	LD_I_A_LD_R_A,

	IN_R_C,
	OUT_C_R,
	SBC_HL_RR,
	LD_INDIRECT_NN_RR,
	NEG,
	RETI_RETN,
	IM_N,
	LD_A_I_LD_A_R,

	IN_R_C,
	OUT_C_R,
	ADC_HL_RR,
	LD_RR_INDIRECT_NN,
	NEG,
	RETI_RETN,
	IM_N,
	LD_A_I_LD_A_R,

	IN_R_C,
	OUT_C_R,
	SBC_HL_RR,
	LD_INDIRECT_NN_RR,
	NEG,
	RETI_RETN,
	IM_N,
	RLD_RRD,

	IN_R_C,
	OUT_C_R,
	ADC_HL_RR,
	LD_RR_INDIRECT_NN,
	NEG,
	RETI_RETN,
	IM_N,
	RLD_RRD,

	IN_R_C,
	OUT_C_R,
	SBC_HL_RR,
	LD_INDIRECT_NN_RR,
	NEG,
	RETI_RETN,
	IM_N,
	ED_UNDEFINED,

	IN_R_C,
	OUT_C_R,
	ADC_HL_RR,
	LD_RR_INDIRECT_NN,
	NEG,
	RETI_RETN,
	IM_N,
	ED_UNDEFINED,

	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 

	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 

	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 

	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 

	LDI_LDD, 
	CPI_CPD, 
	INI_IND, 
	OUTI_OUTD, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 

	LDI_LDD, 
	CPI_CPD, 
	INI_IND, 
	OUTI_OUTD, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 

	LDIR_LDDR, 
	CPIR_CPDR, 
	INIR_INDR, 
	OTIR_OTDR, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 

	LDIR_LDDR, 
	CPIR_CPDR, 
	INIR_INDR, 
	OTIR_OTDR, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 
	ED_UNDEFINED, 

	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,

	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,

	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,

	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,

	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,

	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,

	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,

	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,
	ED_UNDEFINED,

};

static const unsigned char SZYX_FLAGS_TABLE[256] = {

	0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
	0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 
	0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 
	0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 
	0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
	0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 
	0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 
	0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 
	0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 

};

static const unsigned char SZYXP_FLAGS_TABLE[256] = {

	0x44, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x00, 
	0x08, 0x0c, 0x0c, 0x08, 0x0c, 0x08, 0x08, 0x0c, 
	0x00, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, 0x04, 
	0x0c, 0x08, 0x08, 0x0c, 0x08, 0x0c, 0x0c, 0x08, 
	0x20, 0x24, 0x24, 0x20, 0x24, 0x20, 0x20, 0x24, 
	0x2c, 0x28, 0x28, 0x2c, 0x28, 0x2c, 0x2c, 0x28, 
	0x24, 0x20, 0x20, 0x24, 0x20, 0x24, 0x24, 0x20, 
	0x28, 0x2c, 0x2c, 0x28, 0x2c, 0x28, 0x28, 0x2c, 
	0x00, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, 0x04, 
	0x0c, 0x08, 0x08, 0x0c, 0x08, 0x0c, 0x0c, 0x08, 
	0x04, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x00, 
	0x08, 0x0c, 0x0c, 0x08, 0x0c, 0x08, 0x08, 0x0c, 
	0x24, 0x20, 0x20, 0x24, 0x20, 0x24, 0x24, 0x20, 
	0x28, 0x2c, 0x2c, 0x28, 0x2c, 0x28, 0x28, 0x2c, 
	0x20, 0x24, 0x24, 0x20, 0x24, 0x20, 0x20, 0x24, 
	0x2c, 0x28, 0x28, 0x2c, 0x28, 0x2c, 0x2c, 0x28, 
	0x80, 0x84, 0x84, 0x80, 0x84, 0x80, 0x80, 0x84, 
	0x8c, 0x88, 0x88, 0x8c, 0x88, 0x8c, 0x8c, 0x88, 
	0x84, 0x80, 0x80, 0x84, 0x80, 0x84, 0x84, 0x80, 
	0x88, 0x8c, 0x8c, 0x88, 0x8c, 0x88, 0x88, 0x8c, 
	0xa4, 0xa0, 0xa0, 0xa4, 0xa0, 0xa4, 0xa4, 0xa0, 
	0xa8, 0xac, 0xac, 0xa8, 0xac, 0xa8, 0xa8, 0xac, 
	0xa0, 0xa4, 0xa4, 0xa0, 0xa4, 0xa0, 0xa0, 0xa4, 
	0xac, 0xa8, 0xa8, 0xac, 0xa8, 0xac, 0xac, 0xa8, 
	0x84, 0x80, 0x80, 0x84, 0x80, 0x84, 0x84, 0x80, 
	0x88, 0x8c, 0x8c, 0x88, 0x8c, 0x88, 0x88, 0x8c, 
	0x80, 0x84, 0x84, 0x80, 0x84, 0x80, 0x80, 0x84, 
	0x8c, 0x88, 0x88, 0x8c, 0x88, 0x8c, 0x8c, 0x88, 
	0xa0, 0xa4, 0xa4, 0xa0, 0xa4, 0xa0, 0xa0, 0xa4, 
	0xac, 0xa8, 0xa8, 0xac, 0xa8, 0xac, 0xac, 0xa8, 
	0xa4, 0xa0, 0xa0, 0xa4, 0xa0, 0xa4, 0xa4, 0xa0, 
	0xa8, 0xac, 0xac, 0xa8, 0xac, 0xa8, 0xa8, 0xac, 

};

#endif // CPU_LINKEFONG

#endif // Z80EMU_TABLES_H
