#include<iostream>
using namespace std;

class Area{
    private:
        float Length;
        float Breadth;

    public:
    Area(float length,float breadth){
        Length=length;
        Breadth=breadth;
    }
    float calculateArea()
    {
        return Length*Breadth;
    }
    void display(){
        cout<<"Area is "<<calculateArea()<<endl;
    }
    ~Area(){
        cout<<"Destructor called";
    }
};
int main(){
    Area Rectangle1=Area(6,5);
    Rectangle1.display();
    return 0;
}