#include <stdio.h>
#include <stdlib.h>
#include "memory_ops.h"

/* Allocate sensors on heap */
struct Sensor* allocate_sensors(int count) {
    struct Sensor *s = (struct Sensor *)malloc(count * sizeof(struct Sensor));

    if (s == NULL) {
        perror("Heap allocation failed");
        return NULL;
    }

    for (int i = 0; i < count; i++) {
        s[i].id = i + 1;
        s[i].value = (i + 1) * 12.5;
    }

    return s;
}

/* Free allocated memory */
void free_sensors(struct Sensor *s) {
    if (s != NULL) {
        free(s);
    }
}
