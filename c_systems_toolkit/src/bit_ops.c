#include <stdio.h>
#include "bit_ops.h"

/* Set a specific bit */
void set_bit(unsigned int *reg, int bit) {
    *reg |= (1U << bit);
}

/* Clear a specific bit */
void clear_bit(unsigned int *reg, int bit) {
    *reg &= ~(1U << bit);
}

/* Toggle a specific bit */
void toggle_bit(unsigned int *reg, int bit) {
    *reg ^= (1U << bit);
}

/* Read a specific bit */
int read_bit(unsigned int reg, int bit) {
    return (reg >> bit) & 1U;
}

/* Print binary representation */
void print_binary(unsigned int reg) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (reg >> i) & 1U);
        if (i % 4 == 0) printf(" ");
    }
    printf("\n");
}

