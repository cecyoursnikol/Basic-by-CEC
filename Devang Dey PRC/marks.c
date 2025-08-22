#include<stdio.h>

int main(){
	
	float perc;
	int num;
	char x = '%';
	
	printf("Enter your roll no. :- ",num);
	scanf("%d",&num);
	
	printf("Enter your perc:- ",perc);
	scanf("%f",&perc);
	
	printf("\n\nRoll No. %d Has Acquired %.2f%c in 12th.",num,perc,x);
	
	
	return 0;
}
