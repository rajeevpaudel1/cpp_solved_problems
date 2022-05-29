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
		A operator ++(){
			A temp;
			temp.x=++x;
			temp.y=++y;
			return temp;
		}
};
 int main(){
 	A obj(4,5),b1;
 	obj.display();
 	b1=++obj;
 	a1.display();
 	b1.display();
 	return 0;
 	
 }
