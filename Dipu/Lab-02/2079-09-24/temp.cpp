#include<iostream>
using namespace std;
class Employee
{
public:
int salary;
Employee(int sal)
{
       salary=sal;
}
 void copy(Employee x){
    Employee y;
        x.salary=salary;
 }
};
int main(){
    Employee e1(200);
    Employee e2(500);
    Employee e3=e1;
    cout<<e3.salary;
    return 0;
}