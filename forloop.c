/*Day 4: Loops in C

A loop repeats code so you don’t have to write it again and again. Instead of writing printf 5 times, you tell C: “do this 5 times.”

C has three loops: for, while, and do...while.

1. for loop

Use it when you know how many times to repeat.
Output: 1 2 3 4 5 (each on a new line)

A for loop has three parts:

for (start; condition; update)
Start: int i = 1 runs once at the beginning.
Condition: i <= 5 is checked before every round. If false, the loop stops.
Update: i++ runs after every round (adds 1 to i).
*/


#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
    return 0;
}

