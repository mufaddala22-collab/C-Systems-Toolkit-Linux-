#include <stdio.h>
#include <stdlib.h>

#include "array_ops.h"
#include "struct_ops.h"
#include "file_ops.h"
#include "bit_ops.h"
#include "memory_ops.h"
#include "perf_test.h"

#define ARRAY_SIZE 5

void print_menu() {
    printf("\n========== C SYSTEMS TOOLKIT ==========\n");
    printf("1. Array & Pointer Operations\n");
    printf("2. Structure-Based Data Handling\n");
    printf("3. File I/O & Logging System\n");
    printf("4. Bitwise Operations (Register Simulation)\n");
    printf("5. Memory Management (Heap vs Stack)\n");
    printf("6. Performance & Timing Analysis\n");
    printf("0. Exit\n");
    printf("======================================\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;

    do {
        print_menu();
        scanf("%d", &choice);

        switch (choice) {

        case 1: {
            printf("\n--- Module 1: Array & Pointer Operations ---\n");

            int arr[ARRAY_SIZE] = {10, 25, 3, 42, 17};

            print_array(arr, ARRAY_SIZE);
            reverse_array(arr, ARRAY_SIZE);
            print_array(arr, ARRAY_SIZE);

            printf("Max: %d | Min: %d\n",
                   find_max(arr, ARRAY_SIZE),
                   find_min(arr, ARRAY_SIZE));
            break;
        }

        case 2: {
            printf("\n--- Module 2: Structure Operations ---\n");

            struct Sensor sensors[MAX_SENSORS];
            init_sensors(sensors, MAX_SENSORS);
            print_sensors(sensors, MAX_SENSORS);

            printf("Average Sensor Value: %.2f\n",
                   average_value(sensors, MAX_SENSORS));
            break;
        }

        case 3: {
            printf("\n--- Module 3: File I/O & Logging ---\n");

            write_log("System initialized");
            write_log("Module 3 executed");

            printf("Current Log Contents:\n");
            read_log();
            break;
        }

        case 4: {
            printf("\n--- Module 4: Bitwise Operations ---\n");

            unsigned int reg = 0;

            print_binary(reg);

            set_bit(&reg, 2);
            set_bit(&reg, 5);
            print_binary(reg);

            toggle_bit(&reg, 2);
            print_binary(reg);

            printf("Bit 5 status: %d\n", read_bit(reg, 5));
            break;
        }

        case 5: {
            printf("\n--- Module 5: Memory Management ---\n");

            struct Sensor *heap_sensors = allocate_sensors(3);

            if (heap_sensors != NULL) {
                print_sensors(heap_sensors, 3);
                free_sensors(heap_sensors);
            }
            break;
        }

        case 6: {
            printf("\n--- Module 6: Performance Analysis ---\n");
            run_performance_test();
            break;
        }

        case 0:
            printf("\nExiting Systems Toolkit. Goodbye!\n");
            break;

        default:
            printf("\nInvalid choice. Please try again.\n");
        }

    } while (choice != 0);

    return 0;
}

