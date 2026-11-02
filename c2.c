#include <stdio.h>

int main(void)
{
    int a = 17, b = 5;
    printf("%d\n", a + b);    // 22
    printf("%d\n", a - b);    // 12
    printf("%d\n", a * b);    // 85
    printf("%d\n", a / b);    // 3   (integer division)
    printf("%d\n", a % b);    // 2   (remainder; ints only)
    printf("%f\n", a / 5.0);  // 3.400000
    return 0;
}