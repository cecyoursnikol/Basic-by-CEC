#include <stdio.h>

int main() {
    int rows, columns;
	int i,j;
    // Get user input for rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int myArray[rows][columns];

    printf("Enter %d elements:\n", rows * columns);
    for (i = 0; i < rows; i++) {
        for ( j = 0; j < columns; j++) {
            scanf("%d", &myArray[i][j]);
        }
    }

    printf("Entered 2D array:\n");
    for (i = 0; i < rows; i++) {
        for ( j = 0; j < columns; j++) {
            printf("%d ", myArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}

