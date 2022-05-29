#include<iostream>
using namespace std;
class A{
	int x,y;
	public:
		A(int a, int b){
			x=a;
			y=b;
		}
		void display(){
			cout<<"the value of x :"<<x<<endl;
			cout<<"the value of y :"<<y<<endl;
			
		}
		friend A operator -(A a);
		
};
A operator -(A a){
	A temp(2,5);
	temp.x=a.x;
	temp.y=a.y;
	return temp;
}
int main(){
	A obj(2,5);
	obj.display();
	A obj1=-obj;
	obj1.display();
	return 0;    
}
