#define LEN_RING_BUFF 10

typedef struct {
    float values[LEN_RING_BUFF];
    int write_index;
    int count;
} SensorBuffer;

void add_reading(float value, SensorBuffer *buffer) {
    buffer->values[buffer->write_index] = value;
    buffer->write_index = (buffer->write_index + 1) % 10;
    buffer->count = ((buffer->count) < 10) ? (buffer->count) + 1 : 10;
}