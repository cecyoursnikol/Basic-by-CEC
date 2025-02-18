#include <stdio.h>

int main() {
    // Predefined User IDs and Passwords
    int U1 = 1707, U2 = 2509;
    int p1 = 2007, p2 = 2008;

    int id, pass;

    // Asking for User ID
    printf("Enter the ID: ");
    scanf("%d", &id);

    // Checking User 1
    if (id == U1) {
        printf("Enter the password for User 1: ");
        scanf("%d", &pass);

        if (pass == p1) {
            printf("Login successful: User 1\n");
        } else {
            printf("Error: Incorrect password!\n");
        }
    }
    // Checking User 2
    else if (id == U2) {
        printf("Enter the password for User 2: ");
        scanf("%d", &pass);

        if (pass == p2) {
            printf("Login successful: User 2\n");
        } else {
            printf("Error: Incorrect password!\n");
        }
    }
    // If ID is incorrect
    else {
        printf("Error: Invalid ID!\n");
    }

    return 0;
}

