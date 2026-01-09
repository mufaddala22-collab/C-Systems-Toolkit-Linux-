#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "perf_test.h"

#define SIZE 1000000

/* Sum using array indexing */
void index_based_sum(int *arr, int size) {
    long sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
}

/* Sum using pointer traversal */
void pointer_based_sum(int *arr, int size) {
    long sum = 0;
    int *ptr = arr;
    for (int i = 0; i < size; i++) {
        sum += *(ptr + i);
    }
}

/* Run performance comparison */
void run_performance_test(void) {
    int *arr = malloc(SIZE * sizeof(int));
    if (arr == NULL) {
        perror("Memory allocation failed");
        return;
    }

    for (int i = 0; i < SIZE; i++) {
        arr[i] = i;
    }

    clock_t start, end;

    start = clock();
    index_based_sum(arr, SIZE);
    end = clock();
    double index_time = (double)(end - start) / CLOCKS_PER_SEC;

    start = clock();
    pointer_based_sum(arr, SIZE);
    end = clock();
    double pointer_time = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Index-based time   : %f seconds\n", index_time);
    printf("Pointer-based time : %f seconds\n", pointer_time);

    free(arr);
}

