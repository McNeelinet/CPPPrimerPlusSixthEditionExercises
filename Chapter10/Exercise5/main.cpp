#include <iostream>
#include "stack.hpp"

int main()
{
    using std::cin;
    using std::cout;

    Stack stack;
    char ch;
    customer po;
    long long sum = 0;

    cout << "Please enter A to add a customer,\n"
         << "P to delete customer, or Q to quit.\n";

    while (cin >> ch && std::toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!std::isalpha(ch))
        {
            cout << '\n';
            continue;
        }
        switch(ch)
        {
            case 'A':
            case 'a':
                if (stack.isfull())
                    cout << "Stack already full \n";
                else {
                    customer cm;

                    cout << "Enter a customer's name: ";
                    cin.get(cm.fullname, 35);
                    while (cin.get() != '\n');

                    cout << "Enter payment: ";
                    (cin >> cm.payment).get();

                    stack.push(cm);
                }
                break;
            case 'P':
            case 'p':
                if (stack.isempty())
                    cout << "stack already empty \n";
                else {
                    stack.pop(po);
                    sum += po.payment;
                    cout << "Total payment: " << sum << "\n";
                }
        }

        cout << "Please enter A to add a customer,\n"
             << "P to delete customer, or Q to quit.\n";
    }


    return 0;
}
