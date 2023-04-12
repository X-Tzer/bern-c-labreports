#include <iostream>
using namespace std;

template <typename type> //?Single Parameter template
type compare(type num1, type num2)
{
    return num1 > num2 ? num1 : num2;
}

template <typename t, typename u> //? multi parameter template
void add(t num1, u num2)
{
    cout << (u)num1 + num2 << endl;
}

int main()
{
    int result;
    float result_2;
    result = compare<int>(2, 3);
    result_2 = compare<float>(2.3, 2.25);
    cout << result << endl
         << result_2 << endl;

    add<float, double>(0.66, 1.89654125412);

    return 0;
}
