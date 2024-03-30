#include "person.hpp"
#include <iostream>

using namespace std;

int main()
{
    Person one;
    Person two("Smyththecraft");
    Person three("Dimwiddy", "Sam");

    one.Show();
    cout << endl;
    one.FormalShow();
    cout << endl;

    two.Show();
    cout << endl;
    two.FormalShow();
    cout << endl;

    three.Show();
    cout << endl;
    three.FormalShow();
    cout << endl;
    return 0;
}
