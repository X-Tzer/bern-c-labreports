#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Enter the dividend and divisor: ";
    cin >> a >> b;
    try
    {
        if (b == 0)
        {
            throw "Division is not possible";
        }
        c = a / b;
        cout << "The division between two numbers is " << c << endl;
    }
    catch (const char *ex)
    {
        cout << ex;
    }
    return 0;
}