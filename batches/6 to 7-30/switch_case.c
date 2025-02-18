#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    switch (age) {
        case 0 ... 12:
            printf("You are a Child.\n");
            break;
        case 13 ... 19:
            printf("You are a Teenager.\n");
            break;
        case 20 ... 59:
            printf("You are an Adult.\n");
            break;
        case 60 ... 100:
            printf("You are a Senior Citizen.\n");
            break;
        default:
            if (age < 0) {
                printf("Invalid age! Age cannot be negative.\n");
            } else {
                printf("Invalid input! Enter a realistic age.\n");
            }
    }

    return 0;
}

