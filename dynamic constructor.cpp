// Dynamic constructor: object handles/access memory outside its region
#include<iostream>
using namespace std;

class A{
	int a,b;
	int *p;
	public:
		A(){
			a=0;b=0;
			p=new int;               
			*p=0;
		}
		A(int x,int y,int z){
			a=x;
			b=y;
			p=new int;
			*p=z;
		}
};

int main(){
	A o1,o2,o3(3,5,8);
	
}
