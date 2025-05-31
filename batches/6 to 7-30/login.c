#include<stdio.h>
 int main(){
 	
 	int id = 123;
 	int pass = 345;
 	
 	int id_user, pass_user;
 	
 	printf("Enter your id:");
 	scanf("%d",&id_user);
 	
 	printf("Enter your password:");
 	scanf("%d",&pass_user);
 	
 	if(id==id_user){
 		
 		if(pass==pass_user){
 			printf("Login Correct\nAccess Granted");
		}
		else 
		{ 
		    printf("Incorrect password\nAccess Denied");
		} 
	}
 	else{ 
	 	printf("Incorrect id\nAccess Denied");
	}
	
 	return 0;
 }
