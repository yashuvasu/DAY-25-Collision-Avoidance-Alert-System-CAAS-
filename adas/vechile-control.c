#include <stdio.h>

int main() {
    int speed, distance, lane;

    printf("Enter speed: ");
    scanf("%d", &speed);

    printf("Enter distance to vehicle ahead (meters): ");
    scanf("%d", &distance);

    printf("Lane position (-1 left, 0 center, 1 right): ");
    scanf("%d", &lane);

    // Cruise Control Logic
    if (distance < 10) {
        printf("ACC: Slowing down...\n");
        speed -= 10;
    } else {
        printf("ACC: Maintaining speed\n");
    }

    // Emergency Brake
    if (distance < 5) {
        printf("EMERGENCY BRAKE ACTIVATED!\n");
        speed = 0;
    }

    // Lane Keeping Logic
    if (lane == -1) {
        printf("Lane Drift Left → Correcting Right\n");
    } else if (lane == 1) {
        printf("Lane Drift Right → Correcting Left\n");
    } else {
        printf("Lane Stable\n");
    }

    printf("Final Speed: %d km/h\n", speed);

    return 0;
}
