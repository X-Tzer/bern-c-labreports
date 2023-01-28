#include<iostream>
using namespace std;
class Len{
int feet,inch;
public:
Len(int,int);
operator int();
};
Len::Len(int a, int b)
{
    feet=a;
    inch=b;
}
Len::operator int(){
    return(feet*12+inch);
}
int main()
{
    int f,i,length;
    cout<<"Enter length in feet:";
    cin>>f;
    cout<<"Enter length in inch: ";
    cin>>i;
    Len l(f,i);
    length=l;
    cout<<"Total Length in inch is: "<<length;
    return 0;
}