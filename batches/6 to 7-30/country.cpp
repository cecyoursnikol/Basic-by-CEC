#include<iostream>
#include<string>
using namespace std;

class Country{
	public:
		string name;
		string capital;
		int population;
};

int main(){
	Country CountryObj1;
	
	CountryObj1.name = "India";
	CountryObj1.capital = "Delhi";
	CountryObj1.population = 34666000;
	
	Country CountryObj2;

    CountryObj2.name = "USA";
	CountryObj2.capital ="Washington, D.C.";	
	CountryObj2.population =689545;
	
    Country CountryObj3;
    
    CountryObj3.name = "UK";
    CountryObj3.capital ="London";
    CountryObj3.population = 8945309;
    
    cout<<"name:- "<<CountryObj1.name<<"\ncapital:- "<<CountryObj1.capital
	<<"\npopulation:- "<<CountryObj1.population<<"\n"<<endl;
	
	cout<<"name:- "<<CountryObj2.name<<"\ncapital:- "<<CountryObj2.capital
	<<"\npopulation:- "<<CountryObj2.population<<"\n"<<endl;
	
	    cout<<"name:- "<<CountryObj3.name<<"\ncapital:- "<<CountryObj3.capital
	<<"\npopulation:- "<<CountryObj3.population<<"\n";
	
	return 0;
}
