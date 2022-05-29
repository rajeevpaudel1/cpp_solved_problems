#include<iostream>
using namespace std;
class Account{
	int acc_no;
	int balance;
	static int min_balance;
	public:
		void getData(){
			cout<<"enter the account number :"<<endl;
			cin>>acc_no;
			cout<<"enter the balance: "<<endl;
			cin>>balance;
			cout<<"enter the minimum balance:"<<endl;
			cin>>min_balance;
		}
		void display(){
			cout<<"The account number is:"<<acc_no<<endl;
			cout<<"The balance is :"<<balance<<endl;
			}
		static void display_min(){
			cout<<"The minimum balance is:"<<min_balance<<endl;
		}
		
};
int Account::min_balance;
int main(){
	Account a[5];
	for (int i=0;i<5;i++){
		a[i].getData();
		a[i].display();
		a[i].display_min();
		return 0;
		
	}
	
}
