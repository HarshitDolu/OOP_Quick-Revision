#include<iostream>
using namespace std;

class complex{
	private:
		int a,b;
	public:
		complex(){
			
		}
		complex(int x,int y){
			a=x;
			b=y;
		}
		// operator overloading
		// 1. Binary operator
		complex operator +(complex c){
			complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return temp;
		}
		// 2. Unary operator
		complex operator -(){
				complex temp;
			temp.a=-a;
			temp.b=-b;
			return temp;
			
		}
		// pre-increment
		complex operator ++(){
				complex temp;
			temp.a=a+1;
			temp.b=b+1;
			return temp;
		}
		// post-increment
			complex operator ++(int){
				complex temp;
			temp.a=a;
			temp.b=b;
			return temp;
		}
		
		void show(){
			cout<<a<<" "<<b<<endl;
		}
		
		
};

int main(){
	complex c1(4,7);
	complex c2(3,4);
	
	complex c3;
	c3=c1+c2;
	complex c4;
	c4=-c2;
	complex c5;
	c5=++c1;
	c5.show();
	//c4.show();
	return 0;
}
