#include <stdio.h>

int main() {
    int num, i;
    char ch, choice;

    do {
        printf("Enter the sign (+, -, *, /): ");  
        scanf(" %c", &ch);  // Added a space before %c to avoid newline issue

        printf("Enter first number: ");
        scanf("%d", &num);

        printf("Enter second number: ");
        scanf("%d", &i);

        printf("\nAnswer: ");
        switch (ch) {
            case '+': printf("%d + %d = %d\n", num, i, num + i); break;
            case '-': printf("%d - %d = %d\n", num, i, num - i); break;
            case '*': printf("%d * %d = %d\n", num, i, num * i); break;
            case '/': 
                if (i != 0)
                    printf("%d / %d = %d\n", num, i, num / i);
                else
                    printf("Division by zero is not allowed!\n");
                break;
            default:
                printf("ERROR!! Invalid operation\n");
        }

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y'); // Allow both lowercase and uppercase 'Y'

    return 0;
}

