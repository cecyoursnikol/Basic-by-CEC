#include <stdio.h>

int main() {
    int choice, paymentMethod;
    float price = 0;

    // First switch case for menu selection
    printf("Restaurant Menu:\n");
    printf("1. Burger - $150\n");
    printf("2. Pizza - $300\n");
    printf("3. Pasta - $200\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            price = 150;
            printf("You selected Burger.\n");
            break;
        case 2:
            price = 300;
            printf("You selected Pizza.\n");
            break;
        case 3:
            price = 200;
            printf("You selected Pasta.\n");
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }

    // Second switch case for payment method selection
    printf("\nSelect Payment Method:\n");
    printf("1. Cash\n");
    printf("2. Credit/Debit Card\n");
    printf("3. UPI\n");
    printf("Enter your payment choice (1-3): ");
    scanf("%d", &paymentMethod);

    switch(paymentMethod) {
        case 1:
            printf("You chose to pay by Cash.\n");
            break;
        case 2:
            printf("You chose to pay by Card.\n");
            break;
        case 3:
            printf("You chose to pay by UPI.\n");
            break;
        default:
            printf("Invalid payment method!\n");
            return 0;
    }

    // If-else condition to check if a discount applies
    if (price >= 300) {
        printf("\nCongratulations! You get a 10%% discount.\n");
        price = price - (price * 0.10);
    } else {
        printf("\nNo discount available.\n");
    }

    printf("Final Amount to Pay: $%.2f\n", price);

    return 0;
}

