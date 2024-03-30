#include <iostream>
#include <fstream>
#include <string>


int main()
{
    using std::cout;
    using std::cin;
    using std::string;

    cout << "Enter input file name 1: ";
    string input_file_name1;
    cin >> input_file_name1;

    cout << "Enter input file name 2: ";
    string input_file_name2;
    cin >> input_file_name2;

    cout << "Enter output file name 3: ";
    string output_file_name;
    cin >> output_file_name;

    std::ifstream fin1(input_file_name1);
    if (!fin1.is_open())
    {
        cout << "Input file 1 is not available!\n";
        throw;
    }

    std::ifstream fin2(input_file_name2);
    if (!fin2.is_open())
    {
        cout << "Input file 2 is not available!\n";
        throw;
    }

    std::ofstream fout(output_file_name);
    if (!fout.is_open())
    {
        cout << "Output file is not available and I can't create it!\n";
        throw;
    }

    string temp;
    while (!fin1.eof() && !fin2.eof())
    {
        std::getline(fin1, temp);
        fout << temp << ' ';

        std::getline(fin2, temp);
        fout << temp << '\n';
    }

    while (!fin1.eof())
    {
        std::getline(fin1, temp);
        fout << temp << '\n';
    }

    while (!fin2.eof())
    {
        std::getline(fin2, temp);
        fout << temp << '\n';
    }

    return 0;
}
