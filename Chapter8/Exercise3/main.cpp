#include <iostream>
#include <string>
#include <cctype>


const std::string& stringToUpper(std::string& str);

int main()
{
    using namespace std;

    cout << "Enter a string (q to quit): ";
    string str;
    getline(cin, str);

    while (str != "q") {
        cout << stringToUpper(str) << endl;
        cout << "Next string (q to quit): ";
        getline(cin, str);
    }

    return 0;
}

const std::string& stringToUpper(std::string& str)
{
    for (int i = 0; i < str.size(); ++i)
        str[i] = toupper(str[i]);

    return str;
}
