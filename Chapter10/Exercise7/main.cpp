#include <iostream>
#include "plorg.hpp"

using namespace std;

int main()
{
    Plorg first;
    Plorg second("Perl", 70);

    cout << "First plorg:" << endl;
    first.ShowName();
    first.ShowCI();

    cout << endl;

    cout << "Second plorg:" << endl;
    second.ShowName();
    second.ShowCI();

    cout << endl;

    cout << "First and second plorg met together:" << endl;
    first.ChangeCI(100);
    first.ShowCI();
    second.ChangeCI(100);
    second.ShowCI();

    return 0;
}
