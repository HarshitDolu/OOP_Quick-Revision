#include<iostream>
using namespace std;
class product;
class complex{
	int a,b;
	
	public:
		complex(){
			
		}
		complex(int k)
		{
			a=k;
			b=0;
		}
		void set(int x,int y){
			a=x;
			b=y;
		}
		void show(){
			cout<<a<<" "<<b<<endl;
		}
		operator int(){
			return a;
		}
};

class item{
	int a,b;
	public:
		item(){
			
		}
		item(product p){
			a=p.getm();
			b=p.getn();
		}
		void show(){
			cout<<a<<" "<<b<<endl;
		}
	
};
class product{
	int m,n;
	public:
		void set(int x,int y){
			m=x;
			n=y;
		}
		int getm(){
		
		return m;}
		int getn(){
		
		return n;}
};

int main(){
	complex c1,c2;
	c1=5; 
	c2.set(4,8);             // primitive to class type
	int x;
	x=c2;                    // class to primitive type : casting operator
	item i1;
	product p1;
	p1.set(2,6);
	i1=p1;                  // one class type to diff class type
	
	return 0;
}
