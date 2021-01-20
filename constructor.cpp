// Constructor is a special instance member function.No return type,no static.Solves the problem
//of initialization.
// invoked when object is created.
// if there is no constructor,compiler will create it for you.
// complier creates default and copy constructor for you.
// If you created parameterized one, than compliler will not create default one.

#include<iostream>
using namespace std;

class complex
{
	private:
		// instance member variables
		int a;
		int b;
	public:
		complex(){		// default constructor
			cout<<"Hey,I am a default constructor\n";
		}
		complex(int p,int q){ // parameterized constructor
			cout<<"Hey,I am a parameterized constructor\n";
			a=p;
			b=q;
		}
		complex(complex &c){
			a=c.a;
			b=c.b;
		}
		
		
		// instance member functions
		void set(int x,int y){
			a=x;
			b=y;
			
		}
		
		void show(){
			cout<<a<<" "<<b<<endl;
		}
};

int main(){
	// complex c2=complex(5,9);
	complex c1,c2(5,9);
	c1.set(2,6);
	complex c4(c1);      // copy constructor
	c4.show();
	c1.show();
	c2.show();
	return 0;
}
