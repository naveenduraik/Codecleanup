#include <stdio.h>

int addNumbers(int x, int y) {
    // Code smell: Non-descriptive variable names
    int a = x;
    int b = y;

    // Code smell: Unnecessary if statement
    if (1 == 1) {
        // Code smell: Magic number
        return a + b;
    }
    
    // Code smell: Unreachable code
    printf("This code will never be reached.\n");

    // Code smell: Unnecessary return statement
    return 0;
}

int main() {
    int result = addNumbers(5, 7);

    // Bug: Incorrect format specifier in printf
    // Vulnerability hotspot: Potential format string vulnerability
    printf("The Result is : %s\n", result);

    return 0;
}
