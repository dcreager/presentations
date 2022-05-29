int factorial(int x) {
    int result = 1;
    for (int factor = 1; factor <= x; factor++) {
        result *= factor;
    }
    return result;
}

#include <stdio.h>

int main(void) {
    printf("%d\n", factorial(10));
}
