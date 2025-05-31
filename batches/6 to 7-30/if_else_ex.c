#include<stdio.h>

int main(){

	int x,y;
	
	printf("Enter a number for X:- ",x);
	scanf("%d",&x);
	
	printf("Enter a number for Y:- ",y);
	scanf("%d",&y);
	
	if(x < y){
		printf("X is less than Y.");
	}
	else{
		printf("X is greater than Y.");
	}

	return 0;
}
