#include<iostream>
using namespace std;

class simple{
	
	int principle,amount,time;
	int rate=8;
	public:
	void getdata(){
		cout<<"enter the principle: "<<endl;
		cin>>principle;
		cout<<"enter the amount:"<<endl;
		cin>>amount;
		cout<<"enter the time:"<<endl;
		cin>>time;
	}
	void display(){
		cout<<"the simple intrest of customers are....:"<<endl;
		int si=(principle*time*rate)/100;
		cout<<si<<endl;
	}
	
};
int main(){
simple m1,m2,m3;
m1.getdata();
m1.display();
m2.getdata();
m2.display();
m3.getdata();
m3.display();
return 0;
}
