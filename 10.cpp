#include<iostream>
using namespace std;
class Employee{
	string name;
	int id;
	public:
		void getdata(){
			cout<<"Name :"<<endl;
			cin>>name;
			cout<<"id :"<<endl;
			cin>>id;
		}
		void putdata(){
			cout<<"the name of employee is:"<<name<<endl;
			cout<<"the id of employee is: "<<id<<endl;
		}
};
class Manager:public Employee{
	string department;
	public:
			void getdata(){
			Employee::getdata();
			cout<<"Department :"<<endl;
			cin>>department;
		}
		void putdata(){
			Employee::putdata();
			cout<<"the department is:"<<department<<endl;
		}
		
};
class computeroperator:public Employee{
	int Typing_speed;
	public:
			void getdata(){
			Employee::getdata();
			cout<<"Typing speed :"<<endl;
			cin>>Typing_speed;
		}
		void putdata(){
			Employee::putdata();
			cout<<"the typing speed is:"<<Typing_speed<<endl;
		}
};

int main(){
	Manager m;
	m.getdata();
	m.putdata();
	
	computeroperator c;
	c.getdata();
	c.putdata();
	return 0;
}
