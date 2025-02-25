#include<stdio.h>

int main(){
	
	int x = 200; //predefined value
	float y = 85.99;
	char z = 'A';
	
	printf("My number is %d\n",x);
	printf("My Percentage in 10th exam is %f\n",y);
	printf("Your grade is %c\n\n",z);
	
	//user defined
	
	int age;
	float percentage;
	
	printf("Enter your age:- ",age);
	scanf("%d",&age);
	
	printf("Enter your percentage:- ",percentage);
	scanf("%f",&percentage);
	
	printf("Your age is %d\nYour percentage is %.2f",age,percentage);
	
	return 0;
}
