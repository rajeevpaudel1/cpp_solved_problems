#include<iostream>
using namespace std;
class complex
{
    float a,b;
    public:
        void get()
        {
            cout<<endl<<"Enter value for real:"<<endl;
            cin>>a;
            cout<<endl<<"Enter value for imaginary:"<<endl;
            cin>>b;
        }
        void disp()
        {
            cout<<"the sum of complex number is:"<<a<<"+j"<<b;
        }
    friend complex sum(complex,complex);
};
complex sum(complex c1,complex c2)
{
    complex c3;
    c3.a=c1.a+c2.a;
    c3.b=c1.b+c2.b;
    return c3;
}
int main()
{
    complex x,y,z;
    x.get();
    y.get();
    z=sum(x,y);
    z.disp();
    return 0;
}


