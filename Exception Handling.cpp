//Exception is any abnormal behaviour, run time error
//off beat situation in program which must be handled.
// error handling mechanism
// try catch and throw

#include<iostream>
using namespace std;

int main(){
	cout<<"welcome\n";
	try{
		throw 10;
		cout<<"in try\n"
	}
	
	catch(double e){
		cout<<"\n exception no: "<<e;
	}
	catch(int e){
			cout<<"\n exception no: "<<e;
	}
	cout<<"\nLast Line";
}
