long
fib(long x) {
    if (x == 0) return 0;
    if (x == 1) return 1;
    return fib(x - 1) + fib(x - 2);
}

#include <stdio.h>

int main(void) {
    printf("%ld\n", fib(50));
}
