long fib(long x) {
    if (x == 0) return 0;
    if (x == 1) return 1;
    return fib(x - 2) + fib(x - 1);
}

#include <stdio.h>

int main(void) {
    printf("%ld\n", fib(50));
}
