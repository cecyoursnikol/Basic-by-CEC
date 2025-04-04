#include <stdio.h>

int main() {
	
  int items;
  float cost_per_item;

  printf("Number of items: ", items);
  scanf("%d",&items);
  
  printf("Cost per item: ", cost_per_item);
  scanf("%f",&cost_per_item);
  
  printf("Total cost = %.2f",items * cost_per_item);
  

  return 0;
}
