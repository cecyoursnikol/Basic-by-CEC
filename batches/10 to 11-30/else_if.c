#include<stdio.h>

int main(){
	
	int a,b;
	
	printf("Enter number for A:- ",a);
	scanf("%d",&a);
	
	printf("\nEnter number for B:- ",b);
	scanf("%d",&b);
	
	//ladder if else
	
	if(a == b){
		printf("A is equal to B.");
	}
	else if (a > b){
		printf("A is greater than b");
	}
	else if(a < b){
		printf("A is less than b");
	}
	else {
		printf("ERROR!");
	}
	
	
	return 0;
}
