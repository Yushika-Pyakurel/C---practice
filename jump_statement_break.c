#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 6) {
            break;
        }
        printf("%d\n", i);
    }
    printf("Loop ended, i = %d\n", i);
    return 0;
}