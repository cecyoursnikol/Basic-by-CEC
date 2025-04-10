#include<stdio.h>

void fun(){

	int x = 5;
	int y = 10;
	
	printf("X + Y = %d",x+y);

	printf("\nThe sum of X + Y is %d\n\n",x+y);
	
	return 0;
}

int main(){
	
	fun();
	fun();
	fun();	
	return 0;
}
