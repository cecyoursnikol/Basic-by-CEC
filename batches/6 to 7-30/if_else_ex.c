#include<stdio.h>

int main(){

	int x;
	
	printf("Enter a number:-",x);
	scanf("%d",&x);
	
	if(x < 0){
		printf("Entered number is negative.");
	}
	else if(x > 0) {
		printf("Entered number is positive.");
	}
	else{
		printf("The number is zero.");
	}

	return 0;
}
