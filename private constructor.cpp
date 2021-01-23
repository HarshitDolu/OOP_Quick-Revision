#include<iostream>
#include<string.h>
// constructor can be private
// no object creation outside class
// singleton class
using namespace std;
class Admin{
	private:
		char adminName[20];
		char adminPassword[20];
		static int admin_count;
		
		Admin(){
			strcpy(adminName,"admin");
			strcpy(adminPassword,"admin");
		}
	public:
	
		void showAdmin(){
			cout<<"Admin Name: "<<adminName<<endl;
			cout<<"Admin Password: "<<adminPassword<<endl;
		}
		
		static Admin* getInstance(){
			
			if(admin_count==0){
			
			Admin *p=new Admin;
			admin_count++;
			return p;
		}
		else
		return NULL;
			
		}
};
int Admin::admin_count=0;

int main(){
	Admin *admin_p;
	admin_p=Admin::getInstance();
	if(admin_p!=NULL)
	admin_p->showAdmin();
	else
	cout<<"No more admin can be created"
	return 0;
}
