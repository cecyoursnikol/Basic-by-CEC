#include <stdio.h>

int main() {
    // Define an array of integers with 5 elements
    int myArray[5];
	 // Prompt user to enter values for the array
    printf("Enter 5 integers:\n");

    // Read and store user inputs in the array
    int i;  // Declare the variable outside the loop
    for (i = 0; i < 5; i++) {
        printf("Element at index %d: ", i);
        scanf("%d", &myArray[i]);
    }	

    // Access and print the array elements
    printf("\nYou entered:\n");
    for (i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, myArray[i]);
    }
    

    return 0;
}

