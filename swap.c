#include <stdio.h>

int main(void) {
    int a,b;
    printf("\nEnter the two numbers a and b: ");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter swapping the values are: a = %d, b = %d\n", a, b);
}
