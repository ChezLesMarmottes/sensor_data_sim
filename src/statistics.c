#include "sensor_buffer_struct.h"

float compute_average(SensorBuffer *buffer) {
    float avg, sum_values = 0;

    for (int i = 0; i < buffer->count, i++;) {
        sum_values += buffer->values[i];
    }

    avg = sum_values / buffer->count;
}


float compute_min();
float compute_max();