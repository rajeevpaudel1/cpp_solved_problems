#include <iostream>
using namespace std;
int n = 3;
class soccer
{
    int jersey_num;
    int goals;
    int assists;

public:
    soccer()
    {
    }
    void input()
    {
        cout << "Jersey Number" << endl;
        cin >> jersey_num;
        cout << "Goals" << endl;
        cin >> goals;
        cout << "Assists" << endl;
        cin >> assists;
    }
    soccer operator>(soccer a[])
    {
        soccer temp;
        for (int i = 1; i < n; i++)
        {
            if ((goals + assists) < (a[i].goals + a[i].assists))
            {
                temp = *this;
                *this = a[i];
                a[i] = temp;
            }
        }
        return *this;
    }
    void display()
    {
        cout << "Greatest Player with highest total of  Goals and Assist is:\n";
        cout << "Jersey Number" << endl;
        cout << jersey_num << endl;
        cout << "Goals" << endl;
        cout << goals << endl;
        cout << "Assists" << endl;
        cout << assists << endl;
    }
};
int main()
{
    soccer a[n], b;
    for (int i = 0; i < n; i++)
    {
        a[i].input();
    }
    int i = 0;
    b = a[0] > a;
    b.display();
    return 0;
}
