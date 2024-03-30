#include <iostream>
#include <string>
#include <fstream>


int main()
{
    using std::cout;
    using std::cin;
    using std::ofstream;
    using std::string;

    cout << "Please, enter filename: ";
    string filename;
    cin >> filename;
    cin.get();

    cout << "Enter your text <ctrl+d to stop>:\n";
    ofstream fout(filename, std::ios_base::out);
    if (fout.is_open())
    {
        char ch;
        while (cin.get(ch))
            fout.put(ch);
    }

    return 0;
}
