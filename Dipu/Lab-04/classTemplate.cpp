#include <iostream>
#include <cstring>
using namespace std;

template <class T>
class Number
{
private:
    T input;

public:
    Number();
    Number(T n);
    void display();
};
template <class T>
Number<T>::Number(T n) : input(n) {}
template <class T>
Number<T>::Number() : input(0) {}
template <class T>
void Number<T>::display()
{
    cout << "The input is " << input << endl;
}

int main()
{
    Number<int> n(5);
    n.display();
    Number<string> n1("Dipu");
    n1.display();
    return 0;
}