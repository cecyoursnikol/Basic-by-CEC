#include<stdio.h>
	int main(){
		int speed;
		printf("Enter the speed:");
		scanf("%d",&speed);
		
		switch(speed){
			case 5:{
				if(speed<=5){
					printf("Your running speed is upto 5!");
				}
				else{
					printf("Speed data unknown!!");
				}
				break;
			}
			case 7:{
				if(speed>=5 && speed<=7){
					printf("Your running speed is upto 7!");
				}
				else{
					printf("Speed data unknown!!");
				}
				break;
			}
			case 10:{
				printf("Congratulations!!You've broken the world record!!");
				break;
			}
			default:{
				printf("Speed Error!!");
				
				break;
			}
		}
		
		
		return 0;
	}
