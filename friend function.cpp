// Friend function
/* 
1. Not a member function
2. Can access any member of class by creating an object of that class to which it is a friend.
3. No caller object
4. declared inside class
5. defined outside class
6. No membership label

*/
#include<iostream>
using namespace std;
// 1. friend function
class complex
{
	private:
	
		int a,b;
	public:
		complex(){		// default constructor
			
			}
		void set(int x,int y){
			a=x;
			b=y;
			
		}
		
		friend void add(complex);
		
		void show(){
			cout<<a<<" "<<b<<endl;
		}
};
// 2. Add members of two different classes
class B;
 class A{
 	private:
 		int a;
 	public:
 		A(int x){
 			a=x;
			 	}
			 	
		friend void sum(A,B);
 };
 class B{
 	private:
 		int b;
 	public:
 		B(int x){
 			b=x;
			 	}
			 	
		friend void sum(A,B);
 };
 // 3. Friend Class
 class D;
 class C{
 	private:
 		int c;
 		public:
 	C():c(13){
	 }
 	friend class D;
 };
 class D{
 	private:
 		int d;
 		public:
 		D():d(5){
		 }
 			int addy(){
 				C obj;
 				int ans=d+obj.c;
 				return ans;
			 }
 };
 void sum(A o1,B o2){
 	cout<<o1.a+o2.b<<endl;
 }
 
 
 
void add(complex c){
	cout<<c.a+c.b<<endl;
}

int main(){
//	complex c1;
//	c1.set(3,8);
//	add(c1);
//	A o1(2);
//	B o2(3);
//	sum(o1,o2);
	D ob;
	cout<<ob.addy();
	return 0;
}
