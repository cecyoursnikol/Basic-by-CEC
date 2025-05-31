#include <stdio.h>

int main() {
    int i,start, end, step;

    // Taking input from user
    printf("Enter start value: ");
    scanf("%d", &start);

    printf("Enter end value: ");
    scanf("%d", &end);

    printf("Enter step value: ");
    scanf("%d", &step);

    // User-defined for loop
    for (i = start; i <= end; i += step) {
        printf("%d ", i);
    }

    return 0;
}

