static long fib_(long x, long a, long b) {
    if (x == 0) return a;
    return fib_(x - 1, b, a + b);
}

long fib(long x) {
    return fib_(x, 0, 1);
}

#include <stdio.h>

int main(void) {
    printf("%ld\n", fib(50));
}
