#include<iostream>
using namespace std;
int sum (int x, int y, int z=0) //Default argument z
{
return x+y+z;
}
int main()
{
    cout << sum(10,15)<< endl;
    cout << sum (10,15,20)<< endl;
    return 0;

}