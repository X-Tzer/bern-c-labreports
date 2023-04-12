#include <iostream>
using namespace std;
class Abstract
{
private:
    string info;

public:
    virtual void print() = 0;
};
class Concrete
{
private:
    string info;

public:
    void print()
    {
        cout << "Concrete Information " << info << endl;
    }
    Concrete(string s) : info(s)
    {
    }
};
int main()
{
    int a=5,b=6;
    string s;
    s = "Hello";
    Concrete c(s);
    c.print();
    swap(a,b);
    cout<<a<<b;
    return 0;
}