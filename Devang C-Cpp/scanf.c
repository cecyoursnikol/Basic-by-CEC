#include <stdio.h>

int main() {
  
  int item;
  int price;
  
  //user defined programme
  
  printf("Enter the number of items customer wants to buy:- ",item);
  scanf("%d",&item);
  
  printf("\nCustomer have bought %d Items.",item);
  
  printf("Enter the price of the Item:- ",price);
  scanf("%d",&price);
  
  printf("The total cost of the bought items is :- %d",price * item);

  return 0;
}
