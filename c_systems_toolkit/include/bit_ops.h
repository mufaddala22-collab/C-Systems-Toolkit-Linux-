#ifndef BIT_OPS_H
#define BIT_OPS_H

void set_bit(unsigned int *reg, int bit);
void clear_bit(unsigned int *reg, int bit);
void toggle_bit(unsigned int *reg, int bit);
int read_bit(unsigned int reg, int bit);
void print_binary(unsigned int reg);

#endif

