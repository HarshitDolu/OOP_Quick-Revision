// Function template: generic function

#include<iostream>
using namespace std;

template <class X> 

X big(X a,X b){
	if(a>b)
		return a;
	else
		return b;
}
// Class template
template<class T, class U> 
class A  { 
    T x; 
    U y; 
public: 
    A() {    cout<<"Constructor Called"<<endl;   } 
}; 
int main(){
	cout<<big(4,7);
	return 0;
}
