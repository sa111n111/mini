/**
 * Author: Sutinder S. Saini
 * Date: 2/28/2022
 * 
 * Copyright (C) Sutinder S. Saini 2022
 */

#include "vm.h"

void VM::fetch() {

}

void VM::ADD_INSTRUCTION(uint16_t instruction) {
    uint16_t dest_reg = (instruction >> 9) & 0x7;
    uint16_t op_1 = (instruction >> 5) & 0x1;

    // does not feature Immediate mode
    uint16_t register_2 = instruction & 0x7;
    register_table[dest_reg] = register_table[op_1] + register_table[register_2];
}


