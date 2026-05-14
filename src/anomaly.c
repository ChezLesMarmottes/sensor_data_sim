#include <stdlib.h>
#include <math.h>

int is_anomaly(double current, double avg) {
    if (fabs(current - avg) > 1.5) {
        return 1;
    }
    else {
        return 0;
    }
}