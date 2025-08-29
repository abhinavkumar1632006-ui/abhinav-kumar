#include <stdio.h>

int main() {
    int a;
    float b, sum;
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter a float: ");
    scanf("%f", &b);
    sum = a + b;
    printf("Sum = %.2f\n", sum);
    return 0;
}
