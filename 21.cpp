#include <iostream>
using namespace std;

class complex
{
    int real;
    int imaginary;

public:
    complex()
    {
    }
    complex(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    friend complex operator+(complex o1, complex o2);
    void display()
    {
        cout << "The sum of two complex number is: " << endl;
        cout << real << "+i" << imaginary << endl;
    }
};
complex operator+(complex o1, complex o2)
{
    complex temp;
    temp.real = o1.real + o2.real;
    temp.imaginary = o1.imaginary + o2.imaginary;
    return temp;
}
int main()
{
    complex try1(2, 3), try2(4, 5), try3;
    try3 = try1 + try2;
    try3.display();
    return 0;
}
