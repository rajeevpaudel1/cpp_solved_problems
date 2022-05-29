#include <iostream>
using namespace std;
class Room{
    int length,breadth,height;
    public:
    void display(int x, int y, int z){
        length = x; 
		breadth = y;
		height = z;
        cout <<"Area: "<<length*breadth<<endl;
        cout <<"Volume: "<< length * breadth * height << endl;
    }
};
int main(){
    Room r1[3];
    r1[0].display(4,5,8);
    r1[1].display(9,1,4);
    r1[2].display(2,7,8);
    return 0;
}
