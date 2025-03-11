#include<stdio.h>

int main(){
	
	int x;
	int y;
	
	printf("Here you can get the greater of two values.\n");
	
	printf("Enter Value For X:- ",x);
	scanf("%d",&x);
	
	printf("Enter Value For Y:- ",y);
	scanf("%d",&y);
	
	if(x < y){
		printf("X is less than Y, therefore Y is the Greater One.");
	}
	else if(y < x){
		printf("Y is less than X, therefore X is Greater one.");
	}
	else if(x == y){
		printf("Both X & Y are equal.");
	}
	else{
		printf("Error!!");
	}
	
	return 0;
}
