// Deep and Shallow copy
// copy constructor and copy assignment operator
#include<iostream>
using namespace std;

class dummy{
	int a,b;
	int *p;
	public:
		dummy(){
			p=new int;
		}
		void set(int x,int y,int z){
			a=x;
			b=y;
			*p=z;
		}
		void show(){
			cout<<a<<" "<<b<<endl;
		}
		
		dummy(dummy &d){
			a=d.a;
			b=d.b;
		//	p=d.p; // dangerous pointing to same resource
		
		p=new int;
		*p=*(d.p);  // deep copy
		}
};

int main(){
	dummy d1;
	d1.set(3,4,6);
	// shallow copy
	dummy d2=d1; //copy constructor
	dummy d3;
	d3=d1;       // copy assignment operator overload.
	
	
	d2.show();
}
