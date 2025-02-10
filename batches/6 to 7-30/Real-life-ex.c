#include <stdio.h>

int main() {
    float p1, p2, total, discount, final_price;
    int q1, q2;
    
    //to get values
    printf("Enter price and quantity of item 1: ");
    scanf("%f %d", &p1, &q1); //user input
    
    printf("Enter price and quantity of item 2: ");
    scanf("%f %d", &p2, &q2);
    
    //for discount
    printf("Enter discount percentage: ");
    scanf("%f", &discount);
    
    //using operators
    total = (p1 * q1) + (p2 * q2);
    discount = total * (discount / 100);
    final_price = total - discount;
    
    //final output
    printf("\nTotal: %.2f\nDiscount: %.2f\nFinal Price: %.2f\n", total, discount, final_price);
    
    return 0;
}

