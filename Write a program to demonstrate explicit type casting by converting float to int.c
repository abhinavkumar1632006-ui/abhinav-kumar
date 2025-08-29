#include <stdio.h>

int main() {
    float x = 5.89;
    int y = (int)x;  // explicit type casting
    printf("Original float = %.2f\n", x);
    printf("After casting to int = %d\n", y);
    return 0;
}
