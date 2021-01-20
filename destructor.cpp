//Destructor fuction is invoked automatically before object gets destroy.
// it helps to release resources allocated to an object.
nclude<iostream>
using namespace std;

class complex{
	
	private:
		int a,b;
	public:
		complex(){
			cout<<"Hey,I am default constructor.\n";
		}
		~complex(){
			cout<<"Hey,I am destructor.\n";
		}
};

int main(){
	complex c1;
	return 0;
}
