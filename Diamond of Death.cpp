// Technical Jargons
/*
1. Diamond of Death(problem)
2. Disinheritance
3. virtual base class(Solution)
4. virtual inheritance.
5. Diamond problem

					A(a)
				/	|	\
			B1(b1)	|	B2(b2)
				\	|	/
				   C(c) 
				   A is virtual base class of Class C
				Diamond shape
					  
					  	
*/
// problamatic class's child class, insert virtual

#include<iostream>
using namespace std;

class A{
	public:
		int a;
		
			void f1(){
			cout<<"f1\n";
		}
};
class B1:virtual public A{
	public:
		int b1;
		
		void f2(){
			cout<<"f2\n";
		}
};
class B2:virtual public A{
	public:
		int b2;
		
			void f3(){
			cout<<"f3\n";
		}
};

class C:public B1,public B2{
	public:
		int c;
		void f4(){
			cout<<"f4\n";
		}
};


int main(){
	C obj;  // How many variables ?? a,a,b1,b2,c 
	//cout<<sizeof(obj);  // 20 bytes
		cout<<sizeof(obj); // afer creating virtual base class
		// compiler adds pointer variables itself in B1 and B2
		// 24 bytes
		
//	obj.a=5;            // error But why?? => compiler is confused
	
/*	obj.f4();
	obj.f3();
	obj.f2();
	obj.f1();     // compiler confused=>error */
	
	return 0;
	
	
}



