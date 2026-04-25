#include <stdio.h>
#include <math.h> // Required for M_PI and sin() function

// Define symbolic constants for physical constants and conversion factors
#define GRAVITY_ACCELERATION 9.8    // Acceleration due to gravity in m/s^2
#define DEG_TO_RAD M_PI / 180.0  // Conversion factor from degrees to radians

int main() {
    // Variables for user input
    double initial_velocity; // in meters per second (m/s)
    double launch_angle_deg; // in degrees
    double distance_traveled;

    printf("Enter initial velocity (m/s): ");
    scanf("%lf", &initial_velocity);

    printf("Enter launch angle (degrees): ");
    scanf("%lf", &launch_angle_deg);

    // Convert the angle from degrees to radians for the math functions
    double launch_angle_rad = launch_angle_deg * DEG_TO_RAD;

    /*
     * The formula for maximum horizontal distance (range) is:
     * R = (v^2 * sin(2 * theta)) / g
     *
     * We use our symbolic constants GRAVITY_ACCELERATION and M_PI (from math.h)
     * which makes the formula in the code directly mimic the actual physics equation.
     */
    distance_traveled = (pow(initial_velocity, 2) * sin(2 * launch_angle_rad)) / GRAVITY_ACCELERATION;

    printf("\n--- Calculation Results ---\n");
    printf("Gravity constant used: %.2f m/s^2\n", GRAVITY_ACCELERATION);
    printf("The projectile travels a horizontal distance of: %.2f meters\n", distance_traveled);

    return 0;
}
