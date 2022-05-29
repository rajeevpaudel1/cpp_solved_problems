//overloading unary+() operator 

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
			cout<<"the value of x:"<<x<<endl;
			cout<<"the value of y:"<<y<<endl;
		}
		A operator +(){
			x=-x;
			y=-y;
		}
};
int main(){
	A obj(-4,-5);
	obj.display();
	+obj;
	obj.display();
	return 0;
}
