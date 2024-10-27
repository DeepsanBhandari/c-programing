#include <stdio.h>

int main() {
    int i, j;
    int lines = 5;  // You can change this to any number of lines you want

    for (i = 1; i <= lines; i++) {
        // Print leading spaces for formatting
        for (j = i; j < lines; j++) {
            printf(" ");
        }

        // Print stars in increasing numbers
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
