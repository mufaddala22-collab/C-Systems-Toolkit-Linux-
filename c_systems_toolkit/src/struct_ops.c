#include <stdio.h>
#include "struct_ops.h"

/* Initialize sensor data */
void init_sensors(struct Sensor *s, int count) {
    for (int i = 0; i < count; i++) {
        (s + i)->id = i + 1;
        (s + i)->value = (i + 1) * 10.5;
    }
}

/* Print sensor data */
void print_sensors(struct Sensor *s, int count) {
    for (int i = 0; i < count; i++) {
        printf("Sensor ID: %d | Value: %.2f\n",
               (s + i)->id,
               (s + i)->value);
    }
}

/* Calculate average sensor value */
float average_value(struct Sensor *s, int count) {
    float sum = 0.0f;
    for (int i = 0; i < count; i++) {
        sum += (s + i)->value;
    }
    return sum / count;
}
