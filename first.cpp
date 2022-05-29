#include<iostream>
using namespace std;
inline int cube(int x){
	cout<<"the cube of the number is:"<<x*x*x;
}
int main(){
	int a;
	cout<<"enter the integer:"<<endl;
	cin>>a;
	cube(a);
}
