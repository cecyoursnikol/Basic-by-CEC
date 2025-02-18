#include <stdio.h>

int main() {
    int hour;

    printf("Enter the current hour (0-23): ");
    scanf("%d", &hour);

    switch (hour) {
        case 5: case 6: case 7: case 8: case 9: case 10: case 11:
        	
            printf("Good Morning!\n");
            break;
            
        case 12: case 13: case 14: case 15: case 16: case 17:
        	
            printf("Good Afternoon!\n");
            break;
            
        case 18: case 19: case 20: case 21:
        	
            printf("Good Evening!\n");
            break;
            
        case 22: case 23: case 0: case 1: case 2: case 3: case 4:
        	
            printf("Good Night!\n");
            break;
            
        default:
            printf("Invalid input! Please enter a number between 0 and 23.\n");
    }

    return 0;
}

