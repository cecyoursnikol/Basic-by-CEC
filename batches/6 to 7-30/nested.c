#include<stdio.h>

int main(){
	
	int a;
	
	printf("Enter your val:- ");
	scanf("%d", &a);
	
	if(a >= 11 && a <= 20){
		if(a >= 15 && a <= 20){
			printf("Your val is between 15 to 20.");
		}
		else if(a >= 11 && a <=  15)
		{
			printf("Your val is between 11 to 15.");	
		}
	}
	else {
		printf("Error!!");
	}
		
	return 0;
}
