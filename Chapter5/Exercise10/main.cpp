#include <iostream>


int main()
{
    using namespace std;

    int lines;
    cout << "Enter number of lines: ";
    cin >> lines;

    for (int i = 0; i < lines; ++i) {
        for (int j = 0; j < lines - i - 1; ++j)
            cout << ".";
        for (int k = 0; k < i + 1; ++k)
            cout << "*";
        cout << endl;
    }

    return 0;
}
