#include <stdio.h>

int main() {
    int num, sum = 0;
    char choice;

    // User-controlled while loop
    while (1) { // Infinite loop, will break when user enters 'n'
        printf("Enter a number to add: ");
        scanf("%d", &num);

        sum += num; // Add input number to sum

        // Ask user if they want to continue
        printf("Do you want to add another number? (y/n): ");
        scanf(" %c", &choice); // Space before %c to avoid newline issue

        if (choice == 'n' || choice == 'N') {
            break; // Exit loop if user enters 'n'
        }
    }

    printf("Total Sum: %d\n", sum);

    return 0;
}

