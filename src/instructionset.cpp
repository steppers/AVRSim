#include "instructionset.h"

InstructionSet::InstructionSet(MCU* mcu)
{
    _mcu = mcu;
}

int decode(uint16_t instr)
{
    uint16_t temp;

    //Apply the first common mask
    temp = instr & 0xfc00;
    switch(temp)
    {
        case ADC_OP:
            return ADC;
        case ADD_OP:
            return ADD;
        case AND_OP:
            return AND;
        case BRBC_OP:
            return BRBC;
        case BRBS_OP:
            return BRBS;
        case CP_OP:
            return CP;
        case CPC_OP:
            return CPC;
        case CPSE_OP:
            return CPSE;
        case EOR_OP:
            return EOR;
        case MOV_OP:
            return MOV;
        case MUL_OP:
            return MUL;
        case OR_OP:
            return OR;
        case SBC_OP:
            return SBC;
        case SUB_OP:
            return SUB;
        default:
            break;
    }

    //Second common mask
    temp = instr & 0xff00;
    switch(temp)
    {
        case ADIW_OP:
            return ADIW;
        case CBI_OP:
            return CBI;
        case MOVW_OP:
            return MOVW;
        case MULS_OP:
            return MULS;
        case SBI_OP:
            return SBI;
        case SBIC_OP:
            return SBIC;
        case SBIS_OP:
            return SBIS;
        case SBIW_OP:
            return SBIW;
        default:
            break;
    }

    //Third common mask
    temp = instr & 0xf000;
    switch(temp)
    {
        case ANDI_OP:
            return ANDI;
        case CPI_OP:
            return CPI;
        case LDI_OP:
            return LDI;
        case ORI_OP:
            return ORI;
        case RCALL_OP:
            return RCALL;
        case RJMP_OP:
            return RJMP;
        case SBCI_OP:
            return SBCI;
        case SUBI_OP:
            return SUBI;
        default:
            break;
    }

    //Fourth common mask
    temp = instr & 0xfe0f;
    switch(temp)
    {
        case ASR_OP:
            return ASR;
        case COM_OP:
            return COM;
        case DEC_OP:
            return DEC;
        case INC_OP:
            return INC;
        case LDX_OP:
            return LDX;
        case LDXPI_OP:
            return LDXPI;
        case LDXPRD_OP:
            return LDXPRD;
        case LDY_OP:
            return LDY;
        case LDYPI_OP:
            return LDYPI;
        case LDYPRD_OP:
            return LDYPRD;
        case LDZ_OP:
            return LDZ;
        case LDZPI_OP:
            return LDZPI;
        case LDZPRD_OP:
            return LDZPRD;
        case LDS_16_OP:
            return LDS16;
        case LPM_OP:
            return LPM;
        case LPMPI_OP:
            return LPMPI;
        case LSR_OP:
            return LSR;
        case NEG_OP:
            return NEG;
        case POP_OP:
            return POP;
        case PUSH_OP:
            return PUSH;
        case ROR_OP:
            return ROR;
        case STX_OP:
            return STX;
        case STXPI_OP:
            return STXPI;
        case STXPRD_OP:
            return STXPRD;
        case STY_OP:
            return STY;
        case STYPI_OP:
            return STYPI;
        case STYPRD_OP:
            return STYPRD;
        case STZ_OP:
            return STZ;
        case STZPI_OP:
            return STZPI;
        case STZPRD_OP:
            return STZPRD;
        case STS_16_OP:
            return STS16;
        case SWAP_OP:
            return SWAP;
        default:
            break;
    }

    //Fifth common mask
    temp = instr & 0xff8f;
    switch(temp)
    {
        case BCLR_OP:
            return BCLR;
        case BSET_OP:
            return BSET;
        default:
            break;
    }

    //Sixth common mask
    temp = instr & 0xfe08;
    switch(temp)
    {
        case BLD_OP:
            return BLD;
        case BST_OP:
            return BST;
        case SBRC_OP:
            return SBRC;
        case SBRS_OP:
            return SBRS;
        default:
            break;
    }

    //Seventh common mask
    temp = instr & 0xfc07;
    switch(temp)
    {
        case BRCC_OP:
            return BRCC;
        case BRCS_OP:
            return BRCS;
        case BREQ_OP:
            return BREQ;
        case BRGE_OP:
            return BRGE;
        case BRHC_OP:
            return BRHC;
        case BRHS_OP:
            return BRHS;
        case BRID_OP:
            return BRID;
        case BRIE_OP:
            return BRIE;
        case BRLT_OP:
            return BRLT;
        case BRMI_OP:
            return BRMI;
        case BRNE_OP:
            return BRNE;
        case BRPL_OP:
            return BRPL;
        case BRTC_OP:
            return BRTC;
        case BRTS_OP:
            return BRTS;
        case BRVC_OP:
            return BRVC;
        case BRVS_OP:
            return BRVS;
        default:
            break;
    }

    //Eighth common mask
    temp = instr & 0xffff;
    switch(temp)
    {
        case BREAK_OP:
            return BREAK;
        case CLC_OP:
            return CLC;
        case CLH_OP:
            return CLH;
        case CLI_OP:
            return CLI;
        case CLN_OP:
            return CLN;
        case CLS_OP:
            return CLS;
        case CLT_OP:
            return CLT;
        case CLV_OP:
            return CLV;
        case CLZ_OP:
            return CLZ;
        case ICALL_OP:
            return ICALL;
        case IJMP_OP:
            return IJMP;
        case LPM_R0_OP:
            return LPMR0;
        case NOP_OP:
            return NOP;
        case RET_OP:
            return RET;
        case RETI_OP:
            return RETI;
        case SEC_OP:
            return SEC;
        case SEH_OP:
            return SEH;
        case SEI_OP:
            return SEI;
        case SEN_OP:
            return SEN;
        case SES_OP:
            return SES;
        case SET_OP:
            return SET;
        case SEV_OP:
            return SEV;
        case SEZ_OP:
            return SEZ;
        case SLEEP_OP:
            return SLEEP;
        case SPM_OP:
            return SPM;
        case WDR_OP:
            return WDR;
        default:
            break;
    }

    //Ninth common mask
    temp = instr & 0xfe0e;
    switch(temp)
    {
        case CALL_OP:
            return CALL;
        case JMP_OP:
            return JMP;
        default:
            break;
    }

    //Tenth common mask
    temp = instr & 0xff88;
    switch(temp)
    {
        case FMUL_OP:
            return FMUL;
        case FMULS_OP:
            return FMULS;
        case FMULSU_OP:
            return FMULSU;
        case MULS_OP:
            return MULS;
        default:
            break;
    }

    //Eleventh common mask
    temp = instr & 0xf800;
    switch(temp)
    {
        case IN_OP:
            return IN;
        case LDS_7_OP:
            return LDS7;
        case OUT_OP:
            return OUT;
        case STS_7_OP:
            return STS7;
        default:
            break;
    }

    //Twelth common mask
    temp = instr & 0xd208;
    switch(temp)
    {
        case LDDY_OP:
            return LDDY;
        case LDDZ_OP:
            return LDDZ;
        case STDY_OP:
            return STDY;
        case STDZ_OP:
            return STDZ;
        default:
            break;
    }

    //Twelth common mask
    temp = instr & 0xff0f;
    switch(temp)
    {
        case SER_OP:
            return SER;
        default:
            break;
    }

    return NOP;
}
