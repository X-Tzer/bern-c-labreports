#include <iostream>
using namespace std;
class Distance
{
    int real, img;

public:
    void getValue()
    {
        cout << "Enter the value of real number: ";
        cin >> real;
        cout << "Enter the value of imaginary number: ";
        cin >> img;
    }
    Distance operator+(Distance obj)
    {
        Distance temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return (temp);
    }

    void display()
    {
        cout << real << " + (" << img << ")i" << endl;
    }
};
int main()
{
    Distance c1, c2, s;
    c1.getValue();
    c2.getValue();
    s = c1 + c2;
    cout << "Entered values:" << endl;
    c1.display();
    c2.display();
    cout << "Result is: " << endl;
    s.display();
    return 0;
}