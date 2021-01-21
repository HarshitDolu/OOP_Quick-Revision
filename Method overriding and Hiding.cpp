/*
	Method overloading
	Method overriding
	Method Hiding
*/

#include<iostream>
using namespace std;

class A{
	public:
		void f1(){
		}
		void f2(){
		}
};
class B:public A{
	void f1(){        // Method overriding
	}
	
	void f2(int x){   // Method hiding
	}
};

int main(){
	
	B obj; 
	obj.f1(); // B
	obj.f2(); // Error
	obj.f2(4); //B
	
}
