#include<iostream>
using namespace std;
class Time{
	int hour;
	int minute;
	int second;
	public:
	Time(int a, int b, int c){
		hour=a;
		minute=b;
		second=c;
		
	}
	void add(Time &t1,Time &t2){
		t1.hour+=t2.hour;
		t1.minute+=t2.minute;
		t1.second+=t2.second;
		
	}
	void display(){
		
		cout<<"The aggregate result is:"<<t1.hour<<"hour"<<t1.minute<<"minute"<<t1.second<<"second"<<endl;
	}
};
int main(){
	Time t1(4,5,45),t2(11,23,5),t3;
	t3=t1.add(t2);
	t3.display();
	return 0;
	
}
