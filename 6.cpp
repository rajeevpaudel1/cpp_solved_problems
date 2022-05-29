#include<iostream>
using namespace std;
class derived;
class Base{
	public:
	int x,y;
	int a,b;
	
		void getdata(){
		cout<<"enter the value of first coordinate:"<<endl;
		cin>>x>>y;
		cout<<"enter the value of second coordinate:"<<endl;
		cin>>a>>b;
		}
		
		friend void display(Base);
	
};
class Derived:public Base{
	public:
		void add_vector(Base &b1){
			b1.getdata();
			b1.x+=b1.a;
			b1.y+=b1.b;
			
			
		}
};
void display(Base b1){
	cout<<"The sum of two vector coordinate are:"<<b1.x<<"+i"<<b1.y<<endl;
}
int main(){
	Base b1;
	Derived d1;
	d1.add_vector(b1);
	display(b1);
	return 0;
}
