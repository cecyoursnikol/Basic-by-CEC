#include <stdio.h>

int main() {
    int i, j, num;

    printf("Enter Your Number: ");
    scanf("%d", &num);

    for (i = num; i <= 20; i++) {
        for (j = num; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}

