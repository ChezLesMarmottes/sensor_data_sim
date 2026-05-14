#ifndef SENSOR_BUFFER_STRUCT_H
#define SENSOR_BUFFER_STRUCT_H

#define LEN_RING_BUFF 10

typedef struct {
    double values[LEN_RING_BUFF];
    int write_index;
    int count;
} SensorBuffer;

#endif