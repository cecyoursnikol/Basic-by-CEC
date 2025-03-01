#include <stdio.h>

int main() {
    int ticket_type;    // 1: Adult, 2: Child, 3: Student
    int is_weekend;     // 1: Yes, 0: No
    int quantity;       // Number of tickets
    float price = 0.0, total_price = 0.0;

    printf("Movie Ticket Pricing\n");
    printf("1. Adult - $12.50\n2. Child - $7.50\n3. Student - $9.00\n");
    printf("Ticket type (1-3): ");
    scanf("%d", &ticket_type);
    
    printf("Weekend show? (1 for Yes, 0 for No): ");
    scanf("%d", &is_weekend);
    
    printf("Enter the number of tickets: ");
    scanf("%d", &quantity);

    switch (ticket_type) {
        case 1: // Adult
            price = 12.50;
            if (is_weekend == 1) {
                price += 2.00;  // Weekend surcharge
            }
            break;

        case 2: // Child
            price = 7.50;
            if (is_weekend == 1) {
                price += 1.50;  // Weekend surcharge
            }
            break;

        case 3: // Student
            price = 9.00;
            if (is_weekend == 1) {
                price += 1.50;  // Weekend surcharge
            }
            break;

        default:
            printf("Invalid ticket type!\n");
            return 1;
    }

    // Calculate total cost
    total_price = price * quantity;

    printf("\nTotal Price for %d tickets: $%.2f\n", quantity, total_price);
    return 0;
}
