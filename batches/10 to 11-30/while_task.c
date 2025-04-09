#include <stdio.h>

int main() {
    int limit, i; 

	printf("Enter a number: ",i);
    scanf("%d", &i);
    // Taking user input for loop limit
    printf("Enter a number to count up to: ");
    scanf("%d", &limit);

    // While loop runs until 'i' reaches 'limit'
    while (i <= limit) {
        printf("%d\n", i);
        i++; // Increment i
    }

    return 0;
}

