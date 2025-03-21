#include<stdio.h>
	int main(){
	
		int i,j,r,s;
		
		printf("Enter the number of rows:");
		scanf("%d",&r);
		
		for(i = 0;i <= r;i++){
			
			for(j = i;j < r;j++){
				printf(" ");
		}
				for(s = 0;s < i;s++){
				printf("*",i,j);
		}	
			printf("\n");
		}	
		
	return 0;
	}
