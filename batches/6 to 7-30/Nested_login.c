#include<stdio.h>
	int main(){
		
		int id = 123;
		int pass = 456;
		
		int id_user,pass_user;
			
		printf("Enter your id:");
		scanf("%d",&id_user);
		
		printf("Enter your password:");
		scanf("%d",&pass_user);
		
		if(id == id_user){	
			if(pass==pass_user){
			printf("Login Successful!");
		}
	        else {
			printf("Login Unsuccessful!!");
		} 
	}
		else{
			printf("Invalid Login Id!!");
		} 
	return 0;
}
