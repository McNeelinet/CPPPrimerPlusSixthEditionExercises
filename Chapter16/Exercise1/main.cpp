#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>


bool palindrome_check(const std::string& str);

int main()
{
    using std::cout;
    using std::endl;
    using std::cin;

    std::string str;
    cout << "Enter string, I'll check if it's palindrome (or <quit>):\n";
    while (std::getline(cin, str) && str != "quit")
    {
        if (palindrome_check(str))
            cout << "It's palindrome" << endl;
        else
            cout << "It's not palindrome" << endl;
        cout << "Enter another string (or <quit>):\n";
    }

    return 0;
}

bool palindrome_check(const std::string& str)
{
    std::string cpy = str;
    std::reverse(cpy.begin(), cpy.end());

    if (cpy == str)
        return true;
    return false;
}
