
/* Generated by fzmparser version 1.14 --- DO NOT EDIT! */

/* Uses following resources: */
/* [16 events, 16+0 states, 1 inputs, 1 outputs, 0 match regs, 16 capture regs] */

#include "sct_fsm.h"


void sct_fsm_init (void)
{

/* MATCH/CAPTURE registers */

/* Unified counter - register side L is used and accessed as 32 bit value, reg H is not used */
LPC_SCT->REGMODE_L = 0x0000FFFF;         /* U: 0x MATCH, 16x CAPTURE, 0 unused */

LPC_SCT->CAPCTRL[0].U = 0x00000040;
LPC_SCT->CAPCTRL[1].U = 0x00000008;
LPC_SCT->CAPCTRL[2].U = 0x00000080;
LPC_SCT->CAPCTRL[3].U = 0x00000200;
LPC_SCT->CAPCTRL[4].U = 0x00008000;
LPC_SCT->CAPCTRL[5].U = 0x00000004;
LPC_SCT->CAPCTRL[6].U = 0x00000001;
LPC_SCT->CAPCTRL[7].U = 0x00000400;
LPC_SCT->CAPCTRL[8].U = 0x00000010;
LPC_SCT->CAPCTRL[9].U = 0x00000020;
LPC_SCT->CAPCTRL[10].U = 0x00001000;
LPC_SCT->CAPCTRL[11].U = 0x00002000;
LPC_SCT->CAPCTRL[12].U = 0x00000002;
LPC_SCT->CAPCTRL[13].U = 0x00000100;
LPC_SCT->CAPCTRL[14].U = 0x00004000;
LPC_SCT->CAPCTRL[15].U = 0x00000800;

/* OUTPUT registers */
LPC_SCT->OUT[7].SET = 0x0000FFFF;        /* DONE */
LPC_SCT->OUT[7].CLR = 0x0000FFFF;
  /* Unused outputs must not be affected by any event */
LPC_SCT->OUT[0].SET = 0;
LPC_SCT->OUT[0].CLR = 0;
LPC_SCT->OUT[1].SET = 0;
LPC_SCT->OUT[1].CLR = 0;
LPC_SCT->OUT[2].SET = 0;
LPC_SCT->OUT[2].CLR = 0;
LPC_SCT->OUT[3].SET = 0;
LPC_SCT->OUT[3].CLR = 0;
LPC_SCT->OUT[4].SET = 0;
LPC_SCT->OUT[4].CLR = 0;
LPC_SCT->OUT[5].SET = 0;
LPC_SCT->OUT[5].CLR = 0;
LPC_SCT->OUT[6].SET = 0;
LPC_SCT->OUT[6].CLR = 0;
LPC_SCT->OUT[8].SET = 0;
LPC_SCT->OUT[8].CLR = 0;
LPC_SCT->OUT[9].SET = 0;
LPC_SCT->OUT[9].CLR = 0;
LPC_SCT->OUT[10].SET = 0;
LPC_SCT->OUT[10].CLR = 0;
LPC_SCT->OUT[11].SET = 0;
LPC_SCT->OUT[11].CLR = 0;
LPC_SCT->OUT[12].SET = 0;
LPC_SCT->OUT[12].CLR = 0;
LPC_SCT->OUT[13].SET = 0;
LPC_SCT->OUT[13].CLR = 0;
LPC_SCT->OUT[14].SET = 0;
LPC_SCT->OUT[14].CLR = 0;
LPC_SCT->OUT[15].SET = 0;
LPC_SCT->OUT[15].CLR = 0;
LPC_SCT->OUTPUT = (LPC_SCT->OUTPUT & ~0x00000080) | 0x00000000;

/* Conflict resolution register */
LPC_SCT->RES = (LPC_SCT->RES & ~0x0000C000) | 0x0000C000;

/* EVENT registers */
LPC_SCT->EVENT[0].CTRL = 0x000364C0;     /* L: "three" --> state captured3 */
LPC_SCT->EVENT[0].STATE = 0x00000002;
LPC_SCT->EVENT[1].CTRL = 0x000264C0;     /* L: "fifteen" --> state captured15 */
LPC_SCT->EVENT[1].STATE = 0x00000020;
LPC_SCT->EVENT[2].CTRL = 0x0002E8C0;     /* L: "fourteen" --> state captured14 */
LPC_SCT->EVENT[2].STATE = 0x00000004;
LPC_SCT->EVENT[3].CTRL = 0x0001E4C0;     /* L: "five" --> state captured5 */
LPC_SCT->EVENT[3].STATE = 0x00000400;
LPC_SCT->EVENT[4].CTRL = 0x000768C0;     /* L: "six" --> state captured6 */
LPC_SCT->EVENT[4].STATE = 0x00000008;
LPC_SCT->EVENT[5].CTRL = 0x000164C0;     /* L: "thirteen" --> state captured13 */
LPC_SCT->EVENT[5].STATE = 0x00000200;
LPC_SCT->EVENT[6].CTRL = 0x0000E8C0;     /* L: "two" --> state captured2 */
LPC_SCT->EVENT[6].STATE = 0x00000800;
LPC_SCT->EVENT[7].CTRL = 0x000064C0;     /* L: "seven" --> state captured7 */
LPC_SCT->EVENT[7].STATE = 0x00004000;
LPC_SCT->EVENT[8].CTRL = 0x0003E8C0;     /* L: "ten" --> state captured10 */
LPC_SCT->EVENT[8].STATE = 0x00002000;
LPC_SCT->EVENT[9].CTRL = 0x000464C0;     /* L: "eleven" --> state captured11 */
LPC_SCT->EVENT[9].STATE = 0x00000080;
LPC_SCT->EVENT[10].CTRL = 0x0005E4C0;     /* L: "one" --> state captured1 */
LPC_SCT->EVENT[10].STATE = 0x00001000;
LPC_SCT->EVENT[11].CTRL = 0x000668C0;     /* L: "sixteen" --> state L_ENTRY */
LPC_SCT->EVENT[11].STATE = 0x00000010;
LPC_SCT->EVENT[12].CTRL = 0x0004E8C0;     /* L: "twelve" --> state captured12 */
LPC_SCT->EVENT[12].STATE = 0x00000100;
LPC_SCT->EVENT[13].CTRL = 0x0007E8C0;     /* L: "eight" --> state captured8 */
LPC_SCT->EVENT[13].STATE = 0x00000001;
LPC_SCT->EVENT[14].CTRL = 0x0006E4C0;     /* L: "nine" --> state captured9 */
LPC_SCT->EVENT[14].STATE = 0x00008000;
LPC_SCT->EVENT[15].CTRL = 0x000568C0;     /* L: "four" --> state captured4 */
LPC_SCT->EVENT[15].STATE = 0x00000040;
  /* Unused events must not have any effect */

/* STATE registers */
LPC_SCT->STATE_L = 12;
LPC_SCT->STATE_H = 0; /* implicit value */

/* state names assignment: */
  /* State L 0: captured7 */
  /* State L 1: captured2 */
  /* State L 2: captured13 */
  /* State L 3: captured5 */
  /* State L 4: captured15 */
  /* State L 5: captured14 */
  /* State L 6: captured3 */
  /* State L 7: captured10 */
  /* State L 8: captured11 */
  /* State L 9: captured12 */
  /* State L10: captured4 */
  /* State L11: captured1 */
  /* State L12: L_ENTRY */
  /* State L13: captured9 */
  /* State L14: captured6 */
  /* State L15: captured8 */

/* CORE registers */
LPC_SCT->START_L = 0x00000000;
LPC_SCT->STOP_L =  0x00000000;
LPC_SCT->HALT_L =  0x00000800;
LPC_SCT->LIMIT_L = 0x00000800;
LPC_SCT->EVEN =    0x00000800;
LPC_SCT->DMA0REQUEST = 0x00000000;
LPC_SCT->DMA1REQUEST = 0x00000000;

}
