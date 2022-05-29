#include <iostream>
using namespace std;
class times
{
    int hr;
    int min;
    int sec;

public:
    times(int a, int b, int c)
    {
        hr = a;
        min = b;
        sec = c;
    }
    void operator+(times o2)
    {
        int rem;
        hr += o2.hr;
        min += o2.min;
        if (min >= 60)
        {
            rem = 0;
            rem = min / 60;
            hr += rem;
            min -= rem * 60;
        }
        sec += o2.sec;
        if (sec >= 60)
        {
            rem = 0;
            rem = sec / 60;
            min += rem;
            sec -= 60 * rem;
        }
        cout << "Addition of times is:" << endl;
        cout << " Hour: " << hr << endl;
        cout << " Minutes: = " << min << endl;
        cout << "Seconds: =" << sec << endl;
    }
};
int main()
{
    times t1(8,40,6), t2(3,58,12);
    t1+t2;
    return 0;
}
