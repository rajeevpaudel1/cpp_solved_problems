#include<iostream>
#include<string>
using namespace std;
class Account{
	string name;
	string type,y;
	int acc_no;
	int balance;
	public:
		void getdata(){
			cout<<"Enter your name:"<<endl;
			cin>>name;
			cout<<"enter the account type:"<<endl;
			cin>>type;
			cout<<"Enter the account number:"<<endl;
			cin>>acc_no;
			cout<<"Do you want to deposit the amount(y/n) :"<<endl;
			cin>>y;
			while(string n== "y"){
				cout<<"enter the amount to deposit"<<endl;
				cin>>balance;
				cout<<".....Amount deposited....."<<endl;
			}
		}
		void display(){
			cout<<"Name :"<<name<<endl;
			cout<<"Remaning balance: "<<endl;
		}
};
int main(){
	Account a1;
	a1.getdata();
	a1.display();
	return 0;
}
