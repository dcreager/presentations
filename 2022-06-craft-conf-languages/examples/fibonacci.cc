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

#include <iostream>

int main(void) {
    std::cout << fib(10) << std::endl;
}
