#include "sensor_buffer_struct.h"

double compute_average(SensorBuffer *buffer) { 
    if (buffer->count == 0) {
        return 0;
    }

    double avg = 0, sum_values = 0;

    for (int i = 0; i < buffer->count; i++) {
        sum_values += buffer->values[i];
    }

    avg = sum_values / buffer->count;
    return avg;
}

double compute_min(SensorBuffer *buffer) {
    if (buffer->count == 0) {
        return 0;
    }

    double min = buffer->values[0];

    for (int i = 0; i < buffer->count; i++) {
        if (buffer->values[i] < min) {
            min = buffer->values[i];
        }
    }
    return min;
}

double compute_max(SensorBuffer *buffer) {
    if (buffer->count == 0) {
        return 0;
    }
    
    double max = buffer->values[0];

    for (int i = 0; i < buffer->count; i++) {
        if (buffer->values[i] > max) {
            max = buffer->values[i];
        }
    }
    return max;
}