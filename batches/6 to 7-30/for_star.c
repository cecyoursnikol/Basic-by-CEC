#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i < 4; i++) {  // Outer loop for vertical height
        printf("*    *\n");
    }

    for (j = 0; j < 5; j++) {  // Print the bottom row of stars
        printf("*");
    }

    return 0;
}

