#include <stdio.h>

int main() {
    int a = 0;
    int b = 5;

    int* ptr_a = &a;
    int* ptr_b = &b;

    printf("Before swap: a = %d, b = %d\n", a, b);

    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}