#include <iostream>
using namespace std;

class class2;
class class1
{
    int private_number1;

public:
    void setvalue()
    {
        cout << "Set first value: " << endl;
        cin >> private_number1;
    }
    friend int max(class1 x, class2 y);
};

class class2
{
    int private_number2;

public:
    void setvalue()
    {
        cout << "Set second value: " << endl;
        cin >> private_number2;
    }
    friend int max(class1 x, class2 y);
};
int max(class1 x, class2 y)
{
    int a;
    if (x.private_number1 > y.private_number2)
    {
        a = x.private_number1;
    }
    else
    {
        a = y.private_number2;
    }
    return a;
}
int main()
{
    class1 a1;
    class2 a2;
    a1.setvalue();
    a2.setvalue();
    int x = max(a1, a2);
    cout << " the greatest number is:" <<x<< endl;
    return 0;
}
