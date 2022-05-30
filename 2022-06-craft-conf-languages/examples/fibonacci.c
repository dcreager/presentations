long fib(long x) {
    long a = 0;
    long b = 1;
    for (long i = 0; i < x; i++) {
        long next = a + b;
        a = b;
        b = next;
    }
    return a;
}

#include <stdio.h>

int main(void) {
    printf("%ld\n", fib(50));
}
