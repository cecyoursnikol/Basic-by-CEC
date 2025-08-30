#include <iostream>
#include <string>
using namespace std;

// Base class
class Gajender {
  public: 
    string House = "Lakhara Villa\n";
    void address() {
      cout << "Address :- 7, Lakhara Villa,\nMemco, Saijpur\nAhmedabad - 382345.\n";
    }
};

// Derived class
class Kuldeep: public Gajender {
  public: 
    string Car = "Rolls Royce Phantom";
};

int main() {
  Kuldeep myInfo;
  
  // Call base class function
  myInfo.address();

  // Access properties
  cout << "\nHouse: " << myInfo.House;
  cout << "Car: " << myInfo.Car;

  return 0;
}

