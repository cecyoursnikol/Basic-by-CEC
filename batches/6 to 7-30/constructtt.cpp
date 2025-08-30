#include <iostream>
#include<string>
using namespace std;

class laptop {     // The class
  public:           // Access specifier
  	string brand;
  	string model;
  	int price;
    laptop(string x, string y, int z) {     // Constructor
    	brand = x;
    	model = y;
    	price = z;
    }
};

int main() {
	
  laptop laptop1("Lenovo", "Ideapad Gaming", 799);    // Create an object of MyClass (this will call the constructor)
  laptop laptop2("HP", "Victus", 599);
  
  cout <<"\nBrand:- " <<laptop1.brand << "\nModel:- " << laptop1.model << "\nPrice:- " << laptop1.price << "\n";
  cout <<"\nBrand:- " << laptop2.brand << "\nModel:- " << laptop2.model << "\nPrice:- " << laptop2.price << "\n";
  
  return 0;
}

