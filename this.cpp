// Object pointer: A pointer having address of an object.
// this pointer
/*
	it is a local object pointer in every instance member function
	containing address of caller object
	
	it cannot be modify
	
*/

#include<iostream>
using namespace std;

class box{
	private:
		int l,b,h;
		
		public:
			void set(int l,int b,int h){
				this.l=l;
				this.b=b;
				this.h=h;
			}
			
			void show(){
				cout<<l<<" "<<b<<" "<<h<<endl;
			}
			
			
};

int main(){
//	box *p;
	box sb;
//	p=&sb;
	sb.set(3,6,7);
	sb.show();
	return 0;
}
