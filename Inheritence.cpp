// Child class constructor calls parent class constructor
// execute order A than B
// call order B than A
// Destructor execute order B than A

#include<iostream>
using namespace std;

class A{
	int a;
	public:
	/*	A(){
			cout<<"I am Parent class.\n";
		}*/
		
		
		A(int k){
			a=k;
		}
};

class B:public A{
	int b;
	public:
	/*	B():A(){
			cout<<"I am Child class.\n";
		}*/
	B(int x,int y):A(x)	
		{
			b=y;
		}
};

int main(){
	B obj(2,3);
return 0;	
}
