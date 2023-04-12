#include <iostream>
using namespace std;
int main()
{
    int x[2] = {-1, 2};
    for (int i = 0; i < 2; i++)
    {
        int e = x[i];
        try
        {
            if (e > 0)
                throw 'e'; // character value
            else if (e == 2)
                throw e;
            else
                throw "X is  not -2 or greater than 0";
        }
        catch (int ex)
        {
            cout << "Integer Exception" << endl;
        }
        catch (char ex)
        {
            cout << "Character Exception" << endl;
        }
        catch (const char *ex)
        {
            cout << ex << endl;
        }
    }
}