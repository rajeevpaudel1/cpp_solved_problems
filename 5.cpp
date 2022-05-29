#include<iostream>
using namespace std;
class Mountain{
	string name;
	int height;
	string location;
	public:
	
	Mountain(){
	}
	Mountain(string a,int b, string c){
		name=a;
		height=b;
		location=c;
	}
	cmpHeight(Mountain x,Mountain y){
		if (x.height>y.height){
			cout<<"the biggest mountain is :"<<x.name<<endl;
			cout<<"--------------------------------------------------"<<endl;
		}
	
		else{
			cout<<"the biggest mountain is:"<<y.name<<endl;
		}
		
	}
	Displayinf(Mountain x,Mountain y){
		if (x.height>y.height){
			cout<<"The name of mountain is :"<<x.name<<endl;
			cout<<"The height of mountain is:"<<x.height<<endl;
			cout<<"The location of the mountain is:"<<x.location<<endl;
		}
		else{
			cout<<"The name of the mountain is:"<<y.name<<endl;
			cout<<"The height of the mountain is:"<<y.height<<endl;
			cout<<"The location of the mountain is:"<<y.location <<endl;
		}
		
	}
};
int main(){
	Mountain m1("kailash",6845,"Tibet"),m2("Everest",8848,"Nepal"),m3;
	m3.cmpHeight(m1,m2);
	m3.Displayinf(m1,m2);
	return 0;
	
}
