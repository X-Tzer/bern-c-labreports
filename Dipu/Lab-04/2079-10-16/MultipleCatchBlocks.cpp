#include<iostream>
using namespace std;
int main(){
    int x[2]={-1,2};
    for(int i=0;i<2;i++)
    {
        int e=x[i];
        try{
            if(e>0)
            throw 'e';//character value
            else
            throw e;
        }
        catch(int ex){
            cout<<"Integer Exception"<<endl;
        }
        catch(char ex){
            cout<<"Character Exception"<<endl;
        }
    }
}