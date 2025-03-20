#include<stdio.h>

int main(){
	
	int x;
	
	printf("Enter value for X:- ",x);
	scanf("%d",&x);
	
	do{
		printf("\nIncremented value of X by 5 = %d",x);
		x+=5;
		
	}while(x <= 100);
	
	return 0;
}

