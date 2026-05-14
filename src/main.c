#include "statistics.h"
#include "anomaly.h"
#include "sensor.h"
#include "buffer.h"
#include "sensor_buffer_struct.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void) {
    srand(time(0));

    double temp = 0, avg_temp = 0, min_temp = 0, max_temp = 0;
    int bool_input, bool_is_anomaly, tick = 1;
    SensorBuffer buffer = {{0}, 0, 0};

    puts("Press 1 to start measuring, press Ctrl/Cmd + C to stop\n");
    if (scanf("%d", bool_input) != 1) {
        puts("Invalid input\n");
    }

    if (!bool_input) {
        return 0;
    }

    while (1) {
        // Getting info about measurement
        temp = read_sensor();
        add_reading(temp, &buffer);
        avg_temp = compute_average(&buffer);
        min_temp = compute_min(&buffer);
        max_temp = compute_max(&buffer);
        bool_is_anomaly = is_anomaly(temp, avg_temp);

        // Printing info to CLI
        printf("\nTick %d\n", tick);
        tick += 1;

        printf(
            "Value: %lf\n"
            "Avg: %lf\n"
            "Min: %lf\n"
            "Max: %lf\n",
            temp, avg_temp, min_temp, max_temp
        );

        if (bool_is_anomaly) {
            puts("\nWARNING: anomaly detected\n");
        }

        sleep(1);
    }
    return 0;
}