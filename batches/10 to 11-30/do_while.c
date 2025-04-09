#include<stdio.h>
	int main(){
		
		int i=1,num;
		
		printf("Enter the number:");
		scanf("%d",&num);
		
		do{
			
		printf("%d x %d = %d\n",num,i,num*i);
		i++;
		
		}while(i<=10);
		
		return 0;
	}
