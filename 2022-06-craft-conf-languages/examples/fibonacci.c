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

#include <stdio.h>

int main(void) {
    printf("%d\n", fib(10));
}
