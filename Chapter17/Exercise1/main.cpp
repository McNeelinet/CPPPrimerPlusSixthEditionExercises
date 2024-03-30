#include <iostream>


int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    int counter = 0;
    for (; cin.peek() != '$'; ++counter)
        cin.get();

    cout << "Number of characters before \"$\": "
         << counter << endl;

    return 0;
}
