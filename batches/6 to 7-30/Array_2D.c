#include<stdio.h>
	int main(){
		
		int i,j,arr[3][4] = {{{1},{2},{3},{4}},
							{{5},{6},{7},{8}},
							{{9},{10},{11},{12}}};
		
		for(i = 0; i < 3; i++){ //rows
			
				for(j = 0; j < 4; j++){ //columns
				
				printf("%d ",arr[i][j]);
			
				}
			printf(" \n");
		}
		
		
	return 0;
	}
