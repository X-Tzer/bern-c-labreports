#include <iostream>
using namespace std;
class time
{
    int hrs, min;

public:
    time(int);
    void display();
};
time::time(int t)
{
    cout << "Basic Type to Class type" << endl;
    hrs = t / 60;
    min = t % 60;
}
void time::display()
{
    cout << hrs << "hrs" << endl;
    cout << min << "min" << endl;
}
int main()
{
    int dur;
    cout << "Enter the time duration in minutes: ";
    cin >> dur;
    time t(dur);
    t.display();
    return 0;
}