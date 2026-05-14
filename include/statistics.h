#ifndef STATISTICS_H
#define STATISTICS_H

#include "sensor_buffer_struct.h"

float compute_average(SensorBuffer *buffer);
float compute_min();
float compute_max();

#endif