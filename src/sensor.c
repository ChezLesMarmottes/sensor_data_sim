#include "gaussian.h"

double read_sensor(void) {
    double temp, mu = 22.0, sigma = 1.0;
    
    temp = generate_gaussian_noise(mu, sigma);

    return temp;
}