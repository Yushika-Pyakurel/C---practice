#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 2; j++) {
            printf("i=%d j=%d\n", i, j);
        }
    }
    return 0;
}


/*nested loop is: inner loop = across the row, outer loop = down the rows.*/