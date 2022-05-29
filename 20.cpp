#include <iostream>
using namespace std;
class multiplication
{
    int x;
    int y;

public:
    multiplication()
    {
        x = 4;
        y = 1;
    }
    void operator*(multiplication o2)
    {
        x *= o2.x;
        y *= o2.y;
        cout << "Multipication of two object is:" << endl;
        cout << " x = " << x;
        cout << " y = " << y;
    }
};
int main()
{
    multiplication m1, m2;
    m1 *m2;
    return 0;
}
