
#include<stdio.h>
	int main(){
		
	int i,j,arr[10][10];
	int n,m;
		// i = rows, j = columns, n = value row, m = value column.
		printf("Enter number of rows:");
		scanf("%d",&n);
		
		printf("\nEnter number of columns:");
		scanf("%d",&m);
		
		printf("\nEnter [%d] Elements:\n",n,m);
		for(i = 0; i < n; i++){
			for(j = 0; j < m; j++){
				scanf("%d",&arr[i][j]);
			}
		}
		
		printf("\n2D Array:-\n");
		for(i = 0; i < n; i++){
			for(j = 0; j < m; j++){
				printf("%d ",arr[i][j]);
			}
			printf("\n");
		}
			
		return 0;
	}
