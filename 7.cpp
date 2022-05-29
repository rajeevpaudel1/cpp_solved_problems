#include<iostream>
using namespace std;
class Employee{
	int code;
	string name;
	string address;
	int salary;
	public:
	Employee(int a, string b, string c, int d){
		code=a;
		name=b;
		address=c;
		salary=d;
	}
	Employee(Employee &o){
		code=o.code;
		name=o.name;
		address=o.address;
		salary=o.salary;
	}
	void display(){
		cout<<"The code of the employee is:"<<code<<endl;
		cout<<"The name of the employee is:"<<name<<endl;
		cout<<"the address of the employee is:"<<address<<endl;
		cout<<"The salary of the employee is:"<<salary<<endl;
		
	}
};
int main(){
	Employee e1(204,"mahakal","bharatpur",25000),e2(e1);
	e1.display();
	e2.display();
	return 0;
	
}

