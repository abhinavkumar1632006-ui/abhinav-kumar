#include <stdio.h>

int main() {
    float C, F;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &C);
    F = (C * 9 / 5) + 32;
    printf("Temperature in Fahrenheit = %.2f\n", F);
    return 0;
}
