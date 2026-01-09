#include <stdio.h>
#include "array_ops.h"

/* Print array using pointer traversal */
void print_array(int *arr, int size) {
    int *ptr = arr;
    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
}

/* Reverse array using pointer arithmetic */
void reverse_array(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;
    int temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

/* Find maximum element */
int find_max(int *arr, int size) {
    int max = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max)
            max = *(arr + i);
    }
    return max;
}

/* Find minimum element */
int find_min(int *arr, int size) {
    int min = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) < min)
            min = *(arr + i);
    }
    return min;
}

