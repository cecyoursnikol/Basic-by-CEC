#include<iostream>
#include<string>
using namespace std;

class Animals { 
    public: 
        string name;
        string color;
        int population;
        
        int kuldeep(int age); // only declare here
};

// define outside
int Animals::kuldeep(int age) {
    cout << "Mera naam Kuldeep Rajasthani!!" << endl;
    return age;
}

int main() {
    Animals animal1;
    animal1.name = "Wolf";
    animal1.color = "Gray";
    animal1.population = 2500;
    
    cout << "name:- " << animal1.name
         << "\ncolor:- " << animal1.color
         << "\npopulation:- " << animal1.population << "\n" << endl;
    
    Animals animal2;
    animal2.name = "Crocodile";
    animal2.color = "Olive Green";
    animal2.population = 7500;
    
    cout << "name:- " << animal2.name
         << "\ncolor:- " << animal2.color
         << "\npopulation:- " << animal2.population << "\n" << endl;
    
    Animals person;
    cout << "age: " << person.kuldeep(18) << endl;
    
    return 0;
}

