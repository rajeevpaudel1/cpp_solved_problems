#include<iostream>
using namespace std;
class Complex{
	int x,y;
	public:
		Complex(int a, int b){
			x=a;
			y=b;
		}
		void display(Complex c1, Complex c2){
			cout<<"The sum of two complex number is:"<<c1.x+c2.x<<"+j"<<c1.y+c2.y<<endl;
		}
};
int main(){
	Complex c1(4,5),c2(3,2),c3;
	c3.display(c1,c2);
	return 0;
}
