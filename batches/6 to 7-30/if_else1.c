#include<stdio.h>

int main() {
    float pi = 3.14;
    
    float check = 3.14;

    printf("Enter the value of pi: ");
    scanf("%f", &pi);

    printf("You entered: %.2f\n", pi);

    if (pi == check) {
    
	    printf("Right!!\n");
  }
     else {
    	
        printf("Wrong!!\n");
    
	}

    return 0;
}

