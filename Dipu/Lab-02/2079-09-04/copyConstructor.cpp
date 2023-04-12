#include <iostream>
using namespace std;

class copyconstructor
{
private:
    int x, y;

public:
    copyconstructor()
    {
        x = 0;
        y = 0;
    }
    copyconstructor(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    copyconstructor(const copyconstructor &obj)
    {
        x = obj.x;
        y = obj.y;
    }
    void display()
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    copyconstructor c = copyconstructor(3, 6);
    copyconstructor ccopy = c;
    cout << "Original: ";
    c.display();
    cout << "Copied: ";
    ccopy.display();
    c=copyconstructor(5,7);
    c.display();
    ccopy.display();
    return 0;
}