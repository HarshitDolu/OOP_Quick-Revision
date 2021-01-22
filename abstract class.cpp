// Pure virtual function: A do nothing function
// Abstract class: class having atleast one pure virtual function and no instantiate abstract class.


#include<iostream>
using namespace std;

class person{
	public:
		virtual	void fun()=0;  //pure virtual function
		// no defination,no object for person class
		void f1(){
			
		}
};
// override fun function in child class.

class student:public person{
	public:
		void fun(){
			
		}
};


/*
concept: generalization, easy to maintain, reuseability.
					person
				/           \
	student class            faculty class

*/
