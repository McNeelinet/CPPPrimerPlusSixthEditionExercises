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
    std::string first_cpy;
    for (const char& c : str)
    {
        if (!std::isalpha(c))
            continue;
        else
            first_cpy += std::tolower(c);
    }

    std::string second_cpy = first_cpy;
    std::reverse(first_cpy.begin(), first_cpy.end());

    if (first_cpy == second_cpy)
        return true;
    return false;
}
