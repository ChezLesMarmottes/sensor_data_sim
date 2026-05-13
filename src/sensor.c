#include <stdlib.h>
#include <time.h>

float read_sensor(void) {
    float temp, base, noise;
    
    srand(time(0));

    base = 22;
    noise = ((float) rand() / (float) RAND_MAX) - 0.5f;
    temp = base + noise;
}