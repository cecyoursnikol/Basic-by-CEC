#include<iostream>
#include<string>
using namespace std;

class Book{
	public:
		string title;
		string author;
		int year;
};

int main(){
	Book BookObj1;
	Book BookObj2;
	Book BookObj3;
	
	BookObj1.title = "Jungle Book";
	BookObj1.author = "Rudyard Kipling";
	BookObj1.year = 1894;
	
	
	BookObj2.title = "Harry Potter";
	BookObj2.author = "J. K. Rowling";
	BookObj2.year = 1997;
	
	BookObj3.title = "The Lord of the Rings";
	BookObj3.author = "J.R.R. Tolkien";
	BookObj3.year = 1954;
	
	cout<<"Title:- "<<BookObj1.title<<"\nAuthor:- "
	<<BookObj1.author<<"\nYear:- "<<BookObj1.year<<"\n"<<endl;
	
	cout<<"Title:- "<<BookObj2.title<<"\nAuthor:- "
	<<BookObj2.author<<"\nYear:- "<<BookObj2.year<<"\n"<<endl;
	
	cout<<"Title:- "<<BookObj3.title<<"\nAuthor:- "
	<<BookObj3.author<<"\nYear:- "<<BookObj3.year<<endl;

	return 0;
}
