#include <stdio.h>

int main() {
    char grade = 'B';

    switch (grade) {
        case 'A':
        case 'B':
            if (grade == 'A') {
                printf("Excellent!\n");
            } else {
                printf("Good!\n");
            }
            break;
        
        case 'C':
            printf("Average\n");
            break;

        case 'D':
        case 'F':
            if (grade == 'F') {
                printf("Fail\n");
            } else {
                printf("Needs improvement\n");
            }
            break;

        default:
            printf("Invalid grades\n");
    }

    return 0;
}
