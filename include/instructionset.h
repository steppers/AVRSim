#ifndef INSTRUCTIONSET_H
#define INSTRUCTIONSET_H

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

#endif
