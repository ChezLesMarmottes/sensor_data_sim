#include <stdlib.h>
#include <time.h>

double  read_sensor(void) {
    double temp, base, noise;
    
    srand(time(0));

    base = 22;
    noise = ((double) rand() / (double) RAND_MAX) - 0.5f;
    temp = base + noise;
}

double generate_gaussian_noise(void) {
    
}