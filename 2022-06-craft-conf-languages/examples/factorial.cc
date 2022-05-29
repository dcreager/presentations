int factorial(int x) {
    int result = 1;
    for (int factor = 1; factor <= x; factor++) {
        result *= factor;
    }
    return result;
}

#include <iostream>

int main(void) {
    std::cout << factorial(10) << std::endl;
}
