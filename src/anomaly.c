#include <stdlib.h>

int is_anomaly(double current, double avg) {
    if (abs(current - avg) > 1.5f) {
        return 1;
    }
    else {
        return 0;
    }
}