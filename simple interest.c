#include <stdio.h>

int main() {
    float P, R, T, SI;
    printf("Enter Principal, Rate, Time: ");
    scanf("%f %f %f", &P, &R, &T);
    SI = (P * R * T) / 100;
    printf("Simple Interest = %.2f\n", SI);
    return 0;
}
