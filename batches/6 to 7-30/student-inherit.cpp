#include<iostream>
using namespace std;

class Data{
	private:
		string Pan;
	
	public:
		void set_Pan(string P){
			Pan = P;
		}
		string get_Pan(){
			return Pan;
		}
		
};

int main(){
	Data person1;
	
	person1.set_Pan("DMUSM1727N");
	
	cout<<"Person 1 -> Your Pan is " <<person1.get_Pan();
	
	return 0;
}
