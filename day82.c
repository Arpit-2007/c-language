#include <stdio.h>

int main() {
    // Define enum for traffic lights
    enum TrafficLight { RED, YELLOW, GREEN };

    // Example: set current light
    enum TrafficLight light = RED;

    // Print the action based on value
    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid Light\n");
    }

    return 0;
}
