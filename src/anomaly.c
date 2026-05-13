#include <stdlib.h>

int is_anomaly(float current, float avg) {
    if (abs(current - avg) > 1.5f) {
        return 1;
    }
    else {
        return 0;
    }
}