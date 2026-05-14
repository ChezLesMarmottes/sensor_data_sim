#include <math.h>
#include <stdlib.h>

#define M_PI 3.14159265358979323846

double generate_gaussian_noise(double mu, double sigma) {
    double two_pi, u1, u2;
    static double buffered_rand_value;
    static int has_buffered_rand_value = 0;

    two_pi = 2.0  * M_PI;

    if (has_buffered_rand_value) {
        has_buffered_rand_value = 0;
        return buffered_rand_value;
    }

    else {
        do
        {
            u1 = ((double) rand() / (double) RAND_MAX);
        }
        while (u1 == 0);
        u2 = ((double) rand() / (double) RAND_MAX);

        double mag, z0, z1;

        mag = sigma * sqrt(-2.0 * log(u1));
        z0  = mag * cos(two_pi * u2) + mu;
        z1  = mag * sin(two_pi * u2) + mu;

        buffered_rand_value = z1;
        has_buffered_rand_value = 1;

        return z0;
    }
}