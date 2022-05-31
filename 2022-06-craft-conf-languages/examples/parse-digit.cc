#include <iostream>
#include <stdexcept>

using std::invalid_argument;

int parse_digit(char ch) {
    if (ch >= '0' && ch <= '9') {
        return ch - '0';
    }
    throw invalid_argument("Not a digit");
}

void parse_file(const std::string& contents) {
    int digit = parse_digit(contents[0]);
}

void use_file(const std::string& contents) {
    try {
        parse_file(contents);
    } catch (const invalid_argument& ex) {
        std::cout << "The file contained an invalid digit!";
    }
}

int main() {
    std::cout << parse_digit('2') << std::endl;
}
