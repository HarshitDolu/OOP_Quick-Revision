// header files have function declaration.
//library files have function defination.

//  namespace is group of declarations
// it provides distinct space for identifiers so that they don't conflict with
// names in other space
//must be global scope
// we can use alias.
// unnamed namespaces too.
// extended over multiple files.
// using keyword allows you to import an entire namespace into your program with a global scope.

#include<iostream>
using namespace std;

namespace myspace{
	int a;
	int f1();
	class A{
		public:
			void fun1();
	};
	
}
int myspace:: f1(){
	cout<<"Hello\n";
	return 0;
}

void myspace::A::fun1(){
	cout<<"Hey\n";
}

namespace ms=myspace;
using namespace myspace;
int main(){
	a=2;
	f1();
	A obj;
	obj.fun1();
	return 0;
	
}
