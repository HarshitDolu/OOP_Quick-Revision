// initializer list is used to initialize data members of a class.
// to initialize const instance variable
// to initialize reference variable

#include<iostream>
using namespace std;

class dummy{
	private:
		int a,b;
		const int x;
		int &y;
	public:
	/*	dummy(){
			a=5;
		}*/
	dummy(int &n):a(5),b(6),x(7),y(n){
	}
	
};
int main(){
	int m=6;
	dummy d1(m);
	
	return 0;
}

