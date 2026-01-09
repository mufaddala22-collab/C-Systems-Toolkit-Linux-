#ifndef MEMORY_OPS_H
#define MEMORY_OPS_H

#include "struct_ops.h"

struct Sensor* allocate_sensors(int count);
void free_sensors(struct Sensor *s);

#endif
