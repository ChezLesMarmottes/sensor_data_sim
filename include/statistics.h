#ifndef STATISTICS_H
#define STATISTICS_H

#include "sensor_buffer_struct.h"

double compute_average(SensorBuffer *buffer);
double compute_min();
double compute_max();

#endif