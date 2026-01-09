#ifndef STRUCT_OPS_H
#define STRUCT_OPS_H

#define MAX_SENSORS 5

struct Sensor {
    int id;
    float value;
};

void init_sensors(struct Sensor *s, int count);
void print_sensors(struct Sensor *s, int count);
float average_value(struct Sensor *s, int count);

#endif

