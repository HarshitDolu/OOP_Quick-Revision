//Base class pointer can refer to its descendant class
// Virtual function -> Late Binding
#include<iostream>
using namespace std;

class A{
	public:
	virtual	void f1(){
			
		}
	
};

class B:public A{
	public:
		void f1(){
		}
};

int main(){
	A* p,o1;
	
	B o2;
	p=&o2;
	// Early binding
	o2.f1(); //B
	p->f1(); //B
	
	
	
}
