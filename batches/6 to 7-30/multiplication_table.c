#include <stdio.h>

int main() {
    int i, j;

    // Loop for each number from 1 to 20
    for (i = 1; i <= 20; i++) {
        printf("Multiplication Table of %d:\n", i);
        // Loop to print each multiplication result
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); // New line for better readability between tables
    }

    return 0;
}



//#include <stdio.h>
//
//int main() {
//    int number, i;
//
//    // Ask the user for the number they want the multiplication table for
//    printf("Enter a number to generate its multiplication table: ");
//    scanf("%d", &number);
//
//    printf("\nMultiplication Table for %d:\n", number);
//
//    // Loop to print the multiplication table
//    for (i = 1; i <= 10; i++) {
//        printf("%d x %d = %d\n", number, i, number * i);
//    }
//
//    return 0;
//}

