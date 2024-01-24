#include <stdio.h>

// Code smell: Global variables
int globalResult = 0;

int addNumbers(int x, int y) {
    // Code smell: Unused parameters
    int a = x;
    int b = y;

    // Code smell: Unnecessary variable assignment
    int unnecessaryVariable = 42;

    // Code smell: Inconsistent indentation
        return a + b;

    // Code smell: Unreachable code
    printf("This code will never be reached.\n");

    // Code smell: Unnecessary return statement
    return 0;
}

// Code smell: Unused function
void unusedFunction() {
    printf("This function is unused.\n");
}

int main() {
    // Code smell: Ignoring return value of a function
    addNumbers(5, 7);

    // Bug: Incorrect format specifier in printf
    // Vulnerability hotspot: Potential format string vulnerability
    printf("Result: %s\n", globalResult);

    // Code smell: Using a magic number
    int magicNumber = 42;

    // Code smell: Hardcoded string
    printf("This is a hardcoded string for the purpose of sonarcloud evaluation.\n");

    // Code smell: Lack of comments explaining the purpose of the code

    return 0;
}
