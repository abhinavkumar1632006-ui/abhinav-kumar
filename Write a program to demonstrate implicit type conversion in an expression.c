#include <stdio.h>

int main() {
    int a = 5;
    float b = 2.5, result;
    result = a + b;  // int promoted to float automatically
    printf("Result of implicit conversion = %.2f\n", result);
    return 0;
}
