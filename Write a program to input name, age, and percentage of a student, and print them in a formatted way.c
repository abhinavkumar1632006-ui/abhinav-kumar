#include <stdio.h>

int main() {
    char name[30];
    int age;
    float per;
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter percentage: ");
    scanf("%f", &per);
    printf("Student: %s | Age: %d | Percentage: %.2f%%\n", name, age, per);
    return 0;
}
