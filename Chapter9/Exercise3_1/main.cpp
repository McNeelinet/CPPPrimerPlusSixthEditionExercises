#include <iostream>
#include <new>
#include "chaff.hpp"


char buffer1[30];
char buffer2[30];

int main()
{
    using std::cin;
    using std::cout;

    chaff* chaffs[2];
    char tempString[Len];
    int tempInt;

    chaffs[0] = new(buffer1) chaff;
    chaffs[1] = new(buffer2) chaff;

    for (int i = 0; i < 2; ++i) {
        cout << "Enter dross: ";
        cin.get(tempString, Len);
        while (cin.get() != '\n');  // Strip too long input

        cout << "Enter slag: ";
        (cin >> tempInt).get();

        setChaff(*chaffs[i], tempString, tempInt);
        showChaff(*chaffs[i]);
    }


    return 0;
}
