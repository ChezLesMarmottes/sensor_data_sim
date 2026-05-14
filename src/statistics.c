#include "sensor_buffer_struct.h"

double compute_average(SensorBuffer *buffer) {
    double avg, sum_values = 0;

    for (int i = 0; i < buffer->count, i++;) {
        sum_values += buffer->values[i];
    }

    avg = sum_values / buffer->count;
}


double compute_min();
double compute_max();