/**
 * Author: Sutinder S. Saini
 * Date: 2/28/2022
 * 
 * Copyright (C) Sutinder S. Saini 2022
 */

#ifndef MINI_VM_H
#define MINI_VM_H

#include <inttypes.h>

/**
 * Here's how we'll do this:
 *
 * We will have 6 general purpose registers
 * A program counter
 * And a Conditional Flag
 *
 * General purpose registers (may change):
 *  REG0, REG1, REG2, REG3, REG4, REG5
 *
 * Program counter: PROG_CNT
 * Cond-flag: COND_FLAGS
 *
 * Each of which, are 16 bit
 */
enum Registers {
    REG1,
    REG2,
    REG3,
    REG4,
    REG5,

    PROG_CNT,
    COND_FLAGS,
};

enum Opcode {
    ADD,
    JMP,
};

enum {
    FL_POS = 1 << 0,
    FL_ZRO = 1 << 1,
    FL_NEG = 1 << 2
};

class VM {
public:
    uint16_t register_table[PROG_CNT];
    void fetch();
    void ADD_INSTRUCTION(uint16_t instruction);
};


#endif //MINIPHP_VM_H
