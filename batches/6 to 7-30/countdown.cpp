#include<iostream>
using namespace std;

void printcountdown (int n){
	if(n ==0){
	cout<< "done!!";
}
   else{
   	cout<< "counting: "<< n << endl;
    printcountdown (n -1);
   }
   
}
   int main(){
   	
   	int number;
   	cout<< "Enter the number you want:- ";
   	cin >> number;
   	
   	printcountdown(number);
   	
   	return 0;
   }

