#include<stdio.h>

void recur(){
	
	int x;
	
	printf("Enter value for x:- ",x);
	scanf("%d",&x);
	
	if(x <= 50){
		printf("You Caught me!!",x);
	}
	else{
		recur();
	}
}

int main(){
	
	recur();
	
	return 0;
}
