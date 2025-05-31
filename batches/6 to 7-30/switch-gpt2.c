#include <stdio.h>

int main() {
    int choice, paymentMethod, quantity;
    float price = 0, total = 0, discount = 0, finalAmount, tax;
    
    printf("Welcome to XYZ Restaurant!\n");

    // First switch case for menu selection
    printf("\nMenu:\n");
    printf("1. Burger - $150\n");
    printf("2. Pizza - $300\n");
    printf("3. Pasta - $200\n");
    printf("4. Sandwich - $100\n");
    printf("Enter your choice (1-4): ");
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
        case 4:
            price = 100;
            printf("You selected Sandwich.\n");
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }

    // Ask for quantity
    printf("Enter quantity: ");
    scanf("%d", &quantity);

    total = price * quantity;

    // Applying discount based on total bill
    if (total >= 500) {
        discount = total * 0.15;  // 15% discount for orders above ?500
    } else if (total >= 300) {
        discount = total * 0.10;  // 10% discount for orders above ?300
    } else {
        discount = 0;
    }

    printf("\nSelect Payment Method:\n");
    printf("1. Cash\n");
    printf("2. Credit/Debit Card\n");
    printf("3. UPI\n");
    printf("Enter your payment choice (1-3): ");
    scanf("%d", &paymentMethod);

    // Second switch case for payment method selection
    switch(paymentMethod) {
        case 1:
            printf("You chose to pay by Cash.\n");
            break;
        case 2:
            printf("You chose to pay by Card.\n");
            // Extra discount for card payments
            if (total >= 400) {
                discount += 20;  // ?20 extra discount
            }
            break;
        case 3:
            printf("You chose to pay by UPI.\n");
            break;
        default:
            printf("Invalid payment method!\n");
            return 0;
    }

    // Applying tax (5% GST)
    tax = (total - discount) * 0.05;
    finalAmount = (total - discount) + tax;

    // Printing final bill
    printf("\n----- BILL SUMMARY -----\n");
    printf("Total Price: $%.2f\n", total);
    printf("Discount Applied: $%.2f\n", discount);
    printf("Tax (5%% GST): $%.2f\n", tax);
    printf("Final Amount to Pay: $%.2f\n", finalAmount);

    printf("\nThank you for dining with us! \n");

    return 0;
}

