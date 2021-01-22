#include<iostream>
using namespace std;
class A{
	int a;
	public:
	virtual	~A(){
			cout<<"A's Destructor\n"<<endl;
		}
};

class B:public A{
	int b;
	public:
		~B(){
			cout<<"B's Destructor\n"<<endl;
		}
};

void fun(){
	A* ob=new B; 
	delete ob;   
	
}
int main(){
	fun();
	return 0;
	
}
