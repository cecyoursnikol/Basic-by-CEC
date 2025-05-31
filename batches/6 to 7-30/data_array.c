#include<stdio.h>
	int main(){
		
		int i,n,arr[10] = {10,20,30,40,50,60,70,80,90,100};
		
		printf("Enter the Index num:");
		scanf("%d",&n);
		
				
		printf("\n--------------------\n\n");
		
	// code : user asks for index num and the array should be printed as per the index!
		
		for(i = 0;i < 10;i++){
			if(i == n){
			printf("Index %d: %d\n",i,arr[i]);
	       }else{
	       	printf("");
		   }
		}
			
		return 0;
	}
