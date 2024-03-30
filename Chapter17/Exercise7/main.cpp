#include <iostream>
#include <vector>
#include <algorithm>
#include "store.hpp"


void ShowStr(const std::string& str);
void GetStrs(std::ifstream& is, std::vector<std::string>& vstr);

int main()
{
    using namespace std;

    vector<string> vostr;
    string temp;

    // Получить строки
    cout << "Enter strings (empty line to quit):\n";
    while (getline(cin, temp) && temp[0] != '\0')
        vostr.push_back(temp);
    cout << "Here is your input.\n";
    for_each(vostr.begin(), vostr.end(), ShowStr);

    // Сохранить в файле
    ofstream fout("strings.dat", ios_base::out | ios_base::binary);
    for_each(vostr.begin(), vostr.end(), Store(fout));
    fout.close();

    // Восстановить содержимое файла
    vector<string> vistr;
    ifstream fin("strings.dat", ios_base::in | ios_base::binary);
    if (!fin.is_open())
    {
        cerr << "Could not open file for input.\n";
        exit(EXIT_FAILURE);
    }
    GetStrs(fin, vistr);
    cout << "\nHere are the strings read from the file:\n";
    for_each(vistr.begin(), vistr.end(), ShowStr);

    return 0;
}

void ShowStr(const std::string& str)
{
    std::cout << str << std::endl;
}

void GetStrs(std::ifstream& is, std::vector<std::string>& vstr)
{
    std::string temp;

    while (!is.eof() && is.peek() != EOF)
    {
        size_t len;
        char ch;

        is.read(reinterpret_cast<char*>(&len), sizeof(size_t));
        temp.clear();
        for (size_t i = 0; i < len; ++i)
        {
            is.read(&ch, sizeof(char));
            temp += ch;
        }
        vstr.push_back(temp);
    }
}

