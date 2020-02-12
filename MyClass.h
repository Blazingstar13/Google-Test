#include <iostream>
using namespace std;


class MyClass{
	
	public:
	MyClass(){
		//cout << "I am the constructor"<<endl;
	}
	
	~MyClass(){
		//cout << "I am the destructor"<<endl;
	}
	
	int sum(int x, int y){
		return(x+y);
	}
	
	int mult(int x, int y){
		return(x*y);
	}
	
};