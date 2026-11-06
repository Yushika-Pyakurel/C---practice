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
/*

Explanation

The loop should run from 1 to 10.
When i becomes 6, if (i == 6) is true and break; runs.
The loop ends immediately. 6 is not printed, and 7 to 10 never run.
Control jumps to the first line after the loop, which prints “Loop ended”.
The for loop used here is the one coming next. It works like while: for (start; condition; update).

*/