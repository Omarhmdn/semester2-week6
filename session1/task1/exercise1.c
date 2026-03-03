#include <stdio.h>
#include <stdlib.h>

int main() {
  int speed_limit, driver_speed, fine = 0;
  char input[20];

int speed_limit_input(){
  // Get user input for speed limit
  printf("Enter the speed limit: ");
  if (fgets(input, sizeof(input), stdin)) {
    sscanf(input, "%d", &speed_limit);
  }

int driver_speed_input() {
  // Get user input for driver's speed
  printf("Enter the driver's speed: ");
  if (fgets(input, sizeof(input), stdin)) {
    sscanf(input, "%d", &driver_speed);
  }
  }

char fine_calculator() {
  // Determine if the driver is speeding
  if (driver_speed > speed_limit) {
    int excess_speed = driver_speed - speed_limit;

    // Calculate fine based on how much over the limit
    if (excess_speed <= 10) {
      fine = 50;
    } else if (excess_speed <= 20) {
      fine = 100;
    } else {
      fine = 200;
    }

    printf("Fine: $%d\n", fine)
    return;
  } else {
    printf("No fine needed.\n")
    return;
  }
  }

  return 0;
}
}