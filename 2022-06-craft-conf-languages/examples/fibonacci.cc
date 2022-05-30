int fib(int x) {
    int a = 0;
    int b = 1;
    for (int i = 0; i < x; i++) {
        int next = a + b;
        a = b;
        b = next;
    }
    return a;
}

#include <iostream>

int main(void) {
    std::cout << fib(10) << std::endl;
}
