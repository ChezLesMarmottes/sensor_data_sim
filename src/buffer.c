#include "sensor_buffer_struct.h"

void add_reading(double value, SensorBuffer *buffer) {
    buffer->values[buffer->write_index] = value;
    buffer->write_index = (buffer->write_index + 1) % LEN_RING_BUFF;
    buffer->count = ((buffer->count) < LEN_RING_BUFF) ? (buffer->count) + 1 : LEN_RING_BUFF;
}