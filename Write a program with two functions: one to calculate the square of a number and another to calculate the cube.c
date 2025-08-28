#include <stdio.h>

int square(int n) {
    return n * n;
}

int cube(int n) {
    return n * n * n;
}

int main() {
    int num = 5;
    printf("Square of %d = %d\n", num, square(num));
    printf("Cube of %d = %d\n", num, cube(num));
    return 0;
}
