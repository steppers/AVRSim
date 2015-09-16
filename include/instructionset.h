#ifndef INSTRUCTIONSET_H
#define INSTRUCTIONSET_H

#include <stdint.h>
#include "mcu.h"

//Instruction mask and op-code definitionsS
#define ADC_MASK 0xfc00
#define ADC_OP 0x1c00

#define ADD_MASK 0xfc00
#define ADD_OP 0x0c00

#define ADIW_MASK 0xff00
#define ADIW_OP 0x9600

#define AND_MASK 0xfc00
#define AND_OP 0x2000

#define ANDI_MASK 0xf000
#define ANDI_OP 0x7000

#define ASR_MASK 0xfe0f
#define ASR_OP 0x9405

#define BCLR_MASK 0xff8f
#define BCLR_OP 0x9488

#define BLD_MASK 0xfe08
#define BLD_OP 0xf800

#define BRBC_MASK 0xfc00
#define BRBC_OP 0xf400

#define BRBS_MASK 0xfc00
#define BRBS_OP 0xf000

#define BRCC_MASK 0xfc07
#define BRCC_OP 0xf400

#define BRCS_MASK 0xfc07
#define BRCS_OP 0xf000

#define BREAK_MASK 0xffff
#define BREAK_OP 0x9598

#define BREQ_MASK 0xfc07
#define BREQ_OP 0xf001

#define BRGE_MASK 0xfc07
#define BRGE_OP 0xf404

#define BRHC_MASK 0xfc07
#define BRHC_OP 0xf405

#define BRHS_MASK 0xfc07
#define BRHS_OP 0xf005

#define BRID_MASK 0xfc07
#define BRID_OP 0xf407

#define BRIE_MASK 0xfc07
#define BRIE_OP 0xf007

#define BRLO_MASK 0xfc07
#define BRLO_OP 0xf000

#define BRLT_MASK 0xfc07
#define BRLT_OP 0xf004

#define BRMI_MASK 0xfc07
#define BRMI_OP 0xf002

#define BRNE_MASK 0xfc07
#define BRNE_OP 0xf401

#define BRPL_MASK 0xfc07
#define BRPL_OP 0xf402

#define BRSH_MASK 0xfc07
#define BRSH_OP 0xf400

#define BRTC_MASK 0xfc07
#define BRTC_OP 0xf406

#define BRTS_MASK 0xfc07
#define BRTS_OP 0xf006

#define BRVC_MASK 0xfc07
#define BRVC_OP 0xf403

#define BRVS_MASK 0xfc07
#define BRVS_OP 0xf003

#define BSET_MASK 0xff8f
#define BSET_OP 0x9408

#define BST_MASK 0xfe08
#define BST_OP 0xfa00

#define CALL_MASK 0xfe0e
#define CALL_OP 0x940e

#define CBI_MASK 0xff00
#define CBI_OP 0x9800

#define CBR_MASK 0xf000
#define CBR_OP 0x7000

#define CLC_MASK 0xffff
#define CLC_OP 0x9488

#define CLH_MASK 0xffff
#define CLH_OP 0x94d8

#define CLI_MASK 0xffff
#define CLI_OP 0x94f8

#define CLN_MASK 0xffff
#define CLN_OP 0x94a8

#define CLR_MASK 0xfc00
#define CLR_OP 0x2400

#define CLS_MASK 0xffff
#define CLS_OP 0x94c8

#define CLT_MASK 0xffff
#define CLT_OP 0x94e8

#define CLV_MASK 0xffff
#define CLV_OP 0x94b8

#define CLZ_MASK 0xffff
#define CLZ_OP 0x9498

#define COM_MASK 0xfe0f
#define COM_OP 0x9400

#define CP_MASK 0xfc00
#define CP_OP 0x1400

#define CPC_MASK 0xfc00
#define CPC_OP 0x0400

#define CPI_MASK 0xf000
#define CPI_OP 0x3000

#define CPSE_MASK 0xfc00
#define CPSE_OP 0x1000

#define DEC_MASK 0xfe0f
#define DEC_OP 0x940a

#define EOR_MASK 0xfc00
#define EOR_OP 0x2400

#define FMUL_MASK 0xff88
#define FMUL_OP 0x0308

#define FMULS_MASK 0xff88
#define FMULS_OP 0x0380

#define FMULSU_MASK 0xff88
#define FMULSU_OP 0x0388

#define ICALL_MASK 0xffff
#define ICALL_OP 0x9509

#define IJMP_MASK 0xffff
#define IJMP_OP 0x9409

#define IN_MASK 0xf800
#define IN_OP 0xb000

#define INC_MASK 0xfe0f
#define INC_OP 0x9403

#define JMP_MASK 0xfe0e
#define JMP_OP 0x940c

#define LDX_MASK 0xfe0f
#define LDX_OP 0x900c
#define LDXPI_OP 0x900d
#define LDXPRD_OP 0x900e

#define LDY_MASK 0xfe0f
#define LDY_OP 0x8008
#define LDYPI_OP 0x9009
#define LDYPRD_OP 0x900a

#define LDDY_MASK 0xd208
#define LDDY_OP 0x8008

#define LDZ_MASK 0xfe0f
#define LDZ_OP 0x8000
#define LDZPI_OP 0x9001
#define LDZPRD_OP 0x9002

#define LDDZ_MASK 0xd208
#define LDDZ_OP 0x8000

#define LDI_MASK 0xf000
#define LDI_OP 0xe000

#define LDS_16_MASK 0xfe0f
#define LDS_16_OP 0x9000

#define LDS_7_MASK 0xf800
#define LDS_7_OP 0xa000

#define LPM_R0_MASK 0xffff
#define LPM_R0_OP 0x95c8

#define LPM_MASK 0xfe0f
#define LPM_OP 0x9004
#define LPMPI_OP 0x9005

#define LSL_MASK 0xfc00
#define LSL_OP 0x0c00

#define LSR_MASK 0xfe0f
#define LSR_OP 0x9406

#define MOV_MASK 0xfc00
#define MOV_OP 0x2c00

#define MOVW_MASK 0xff00
#define MOVW_OP 0x0100

#define MUL_MASK 0xfc00
#define MUL_OP 0x9c00

#define MULS_MASK 0xff00
#define MULS_OP 0x0200

#define MULSU_MASK 0xff88
#define MULSU_OP 0x0300

#define NEG_MASK 0xfe0f
#define NEG_OP 0x9401

#define NOP_MASK 0xffff
#define NOP_OP 0x0000

#define OR_MASK 0xfc00
#define OR_OP 0x2800

#define ORI_MASK 0xf000
#define ORI_OP 0x6000

#define OUT_MASK 0xf800
#define OUT_OP 0xb800

#define POP_MASK 0xfe0f
#define POP_OP 0x900f

#define PUSH_MASK 0xfe0f
#define PUSH_OP 0x920f

#define RCALL_MASK 0xf000
#define RCALL_OP 0xd000

#define RET_MASK 0xffff
#define RET_OP 0x9508

#define RETI_MASK 0xffff
#define RETI_OP 0x9518

#define RJMP_MASK 0xf000
#define RJMP_OP 0xc000

#define ROL_MASK 0xfc00
#define ROL_OP 0x1c00

#define ROR_MASK 0xfe0f
#define ROR_OP 0x9407

#define SBC_MASK 0xfc00
#define SBC_OP 0x0800

#define SBCI_MASK 0xf000
#define SBCI_OP 0x4000

#define SBI_MASK 0xff00
#define SBI_OP 0x9a00

#define SBIC_MASK 0xff00
#define SBIC_OP 0x9900

#define SBIS_MASK 0xff00
#define SBIS_OP 0x9b00

#define SBIW_MASK 0xff00
#define SBIW_OP 0x9700

#define SBR_MASK 0xf000
#define SBR_OP 0x6000

#define SBRC_MASK 0xfe08
#define SBRC_OP 0xfc00

#define SBRS_MASK 0xfe08
#define SBRS_OP 0xfe00

#define SEC_MASK 0xffff
#define SEC_OP 0x9408

#define SEH_MASK 0xffff
#define SEH_OP 0x9458

#define SEI_MASK 0xffff
#define SEI_OP 0x9478

#define SEN_MASK 0xffff
#define SEN_OP 0x9428

#define SER_MASK 0xff0f
#define SER_OP 0xef0f

#define SES_MASK 0xffff
#define SES_OP 0x9448

#define SET_MASK 0xffff
#define SET_OP 0x9468

#define SEV_MASK 0xffff
#define SEV_OP 0x9438

#define SEZ_MASK 0xffff
#define SEZ_OP 0x9418

#define SLEEP_MASK 0xffff
#define SLEEP_OP 0x9588

#define SPM_MASK 0xffff
#define SPM_OP 0x95e8

#define STX_MASK 0xfe0f
#define STX_OP 0x920c
#define STXPI_OP 0x920d
#define STXPRD_OP 0x920e

#define STY_MASK 0xfe0f
#define STY_OP 0x8208
#define STYPI_OP 0x9209
#define STYPRD_OP 0x920a

#define STDY_MASK 0xd208
#define STDY_OP 0x8208

#define STZ_MASK 0xfe0f
#define STZ_OP 0x8200
#define STZPI_OP 0x9201
#define STZPRD_OP 0x9202

#define STDZ_MASK 0xd208
#define STDZ_OP 0x8200

#define STS_16_MASK 0xfe0f
#define STS_16_OP 0x9200

#define STS_7_MASK 0xf800
#define STS_7_OP 0xa800

#define SUB_MASK 0xfc00
#define SUB_OP 0x1800

#define SUBI_MASK 0xf000
#define SUBI_OP 0x5000

#define SWAP_MASK 0xfe0f
#define SWAP_OP 0x9402

#define TST_MASK 0xfc00
#define TST_OP 0x2000

#define WDR_MASK 0xffff
#define WDR_OP 0x95a8

//Instruction enum, Some are missing to prevent duplicates of code
enum{
    ADD,
    ADC,
    ADIW,
    SUB,
    SUBI,
    SBC,
    SBCI,
    SBIW,
    AND,
    ANDI,
    OR,
    ORI,
    EOR,
    COM,
    NEG,
    INC,
    DEC,
    SER,
    MUL,
    MULS,
    MULSU,
    FMUL,
    FMULS,
    FMULSU,
    RJMP,
    IJMP,
    JMP,
    RCALL,
    ICALL,
    CALL,
    RET,
    RETI,
    CPSE,
    CP,
    CPC,
    CPI,
    SBRC,
    SBRS,
    SBIC,
    SBIS,
    BRBS,
    BRBC,
    BREQ,
    BRNE,
    BRCS,
    BRCC,
    BRMI,
    BRPL,
    BRGE,
    BRLT,
    BRHS,
    BRHC,
    BRTS,
    BRTC,
    BRVS,
    BRVC,
    BRIE,
    BRID,
    SBI,
    CBI,
    LSR,
    ROR,
    ASR,
    SWAP,
    BSET,
    BCLR,
    BST,
    BLD,
    SEC,
    CLC,
    SEN,
    CLN,
    SEZ,
    CLZ,
    SEI,
    CLI,
    SES,
    CLS,
    SEV,
    CLV,
    SET,
    CLT,
    SEH,
    CLH,
    MOV,
    MOVW,
    LDI,
    LDX,
    LDXPI,
    LDXPRD,
    LDY,
    LDYPI,
    LDYPRD,
    LDDY,
    LDZ,
    LDZPI,
    LDZPRD,
    LDDZ,
    LDS16,
    LDS7,
    STX,
    STXPI,
    STXPRD,
    STY,
    STYPI,
    STYPRD,
    STDY,
    STZ,
    STZPI,
    STZPRD,
    STDZ,
    STS16,
    STS7,
    LPMR0,
    LPM,
    LPMPI,
    SPM,
    IN,
    OUT,
    PUSH,
    POP,
    NOP,
    SLEEP,
    WDR,
    BREAK
};

class InstructionSet
{
public:
    InstructionSet(MCU* mcu);
    virtual int execute(uint16_t instr);

protected:
    MCU* _mcu;
};

#endif
