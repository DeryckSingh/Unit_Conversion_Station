#include <stdio.h>
#include <limits.h>

int main(void) {
    int x = INT_MAX;
    printf("Before: %d\n", x);
    x = x + 1;
    printf("After: %d\n", x);
    return 0;
}