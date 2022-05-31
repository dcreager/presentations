#include <iostream>
#include <stdexcept>

using namespace std;

int
parse_digit(char ch) {
    if (ch >= '0' && ch <= '9') {
        return ch - '0';
    }
    throw invalid_argument("not a digit");
}

void
parse_file(const string& contents) {
    int digit = parse_digit(contents[0]);
}

void
use_file(const string& contents) {
    try {
        parse_file(contents);
    } catch (const invalid_argument& ex) {
        cout << ex.what() << endl;
    }
}

int main() {
    std::cout << parse_digit('2') << std::endl;
}
