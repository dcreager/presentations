#include <stdio.h>

int parse_digit(char ch) {
    if (ch >= '0' && ch <= '9') {
        return ch - '0';
    }
    return -1;
}

int parse_file(const char* contents) {
    int digit = parse_digit(contents[0]);
    if (digit == -1) {
        return -1;
    }
    return 0;
}

void use_file(const char* contents) {
    int rc = parse_file(contents);
    if (rc == -1) {
        printf("not a digit!\n");
    }
}

int main() {
    printf("%d\n", parse_digit('2'));
}
