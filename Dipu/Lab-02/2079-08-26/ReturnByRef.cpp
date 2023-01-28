#include<iostream>
using namespace std;
int num;
int &fun();
int main()
{
    fun()=6;
    cout << num << endl;
    return 0;
}
int &fun()
{
    return num;
}