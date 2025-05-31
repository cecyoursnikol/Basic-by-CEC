#include<stdio.h>

int main(){
	
	int x = 10;
	int* ptr = &x;
	
	printf("%d\n",x);
	
	printf("%p\n",&x);
	
	printf("%p\n", ptr);
	
	return 0;
}
