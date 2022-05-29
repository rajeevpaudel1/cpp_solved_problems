#include<iostream>
using namespace std;
class Teacher{
	int tid;
	int subject;
	public:
		void read(){
		}
		void display(){
		}
};

class Staff{
	int sid;
	string position;
	public:
		void read(){
		}
		void display(){
		}
};
class Coordinator: public Teacher,public {
	int cid;
	public:
		void read(){
		}
		void display(){
		}
};
