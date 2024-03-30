#include <iostream>
#include <string>
#include <fstream>


int main()
{
    using std::cout;
    using std::cin;
    using std::ofstream;
    using std::ifstream;

    cout << "Enter input file name: ";
    std::string in_filename;
    cin >> in_filename;

    cout << "Enter output file name: ";
    std::string out_filename;
    cin >> out_filename;

    ifstream fin(in_filename);
    if (!fin.is_open())
    {
        cout << "Input file is not available!\n";
        throw;
    }

    ofstream fout(out_filename);
    if (!fout.is_open())
    {
        cout << "Output file is not available and i can't create it!\n";
        throw;
    }

    char ch;
    while (fin.get(ch))
        fout.put(ch);
    cout << "Done.";

    return 0;
}
