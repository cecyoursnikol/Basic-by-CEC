#include<stdio.h>
int main(){
	
	int i,num;
	
	printf("Enter your number:- ",num);
	scanf("%d",&num);
	
	for(i = 1; i <= 10; i++){
		
		printf("%d x %d = %d\n",num,i,i*num);
	}
	
	return 0;
}
