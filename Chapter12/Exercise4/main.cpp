#include "stack.hpp"
#include <iostream>

using namespace std;

int main()
{
    Stack numbers1;
    Stack numbers2;

    for (int i = 0; !numbers1.isfull(); ++i)
    {
        numbers1.push(i);
    }

    numbers2 = numbers1;
    Stack numbers3 = numbers1;

    cout << "Numbers 1 (original):\n";
    while(!numbers1.isempty())
    {
        unsigned long num;
        numbers1.pop(num);
        cout << num << " ";
    }
    cout << endl;

    cout << "Numbers 2 (assignment overload):\n";
    while(!numbers2.isempty())
    {
        unsigned long num;
        numbers2.pop(num);
        cout << num << " ";
    }
    cout << endl;

    cout << "Numbers 3 (copy constructor):\n";
    while(!numbers3.isempty())
    {
        unsigned long num;
        numbers3.pop(num);
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
