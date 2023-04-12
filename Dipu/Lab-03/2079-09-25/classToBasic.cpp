#include <iostream>
using namespace std;
class Feet
{
    int hrs, min;

public:
    Feet(int, int);
    operator int();
};
Feet::Feet(int a, int b)
{
    hrs = a;
    min = b;
}
Feet::operator int()
{
    return (hrs * 60 + min);
}
int main()
{
    int h, m, duration;
    cout << "Enter hours:";
    cin >> h;
    cout << "Enter minutes: ";
    cin >> m;
    Feet t(h, m);
    duration = t;
    cout << "total minutes are: " << duration;
    return 0;
}