#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>


const char* MAT_FILE = "mat.dat";
const char* PAT_FILE = "pat.dat";
const char* MATNPAT_FILE = "matnpat.dat";

int main()
{
    using std::cout;
    using std::cin;
    using std::string;
    using std::ifstream;
    using std::ofstream;

    string temp;

    std::ifstream fin(MAT_FILE);
    if (!fin.is_open())
    {
        cout << "File with Mat's friends is unavailable!";
        throw;
    }

    std::vector<string> mat_friends;
    while (!fin.eof() && fin.peek() != EOF)
    {
        std::getline(fin, temp);
        mat_friends.push_back(temp);
    }

    std::sort(mat_friends.begin(), mat_friends.end());
    for (string& name : mat_friends)
        cout << name << '\n';

    fin.close();
    fin.open(PAT_FILE);
    if (!fin.is_open())
    {
        cout << "File with Pat's friends is unavailable!";
        throw;
    }

    std::vector<string> pat_friends;
    while (!fin.eof() && fin.peek() != EOF)
    {
        std::getline(fin, temp);
        pat_friends.push_back(temp);
    }

    std::sort(pat_friends.begin(), pat_friends.end());
    for (string& name : pat_friends)
        cout << name << '\n';

    std::vector<string> matnpat_friends;
    matnpat_friends.insert(matnpat_friends.begin(), mat_friends.begin(), mat_friends.end());
    matnpat_friends.insert(matnpat_friends.end(), pat_friends.begin(), pat_friends.end());
    std::sort(matnpat_friends.begin(), matnpat_friends.end());
    std::unique(matnpat_friends.begin(), matnpat_friends.end());

    ofstream fout(MATNPAT_FILE);
    for (string& name : matnpat_friends)
        fout << name << '\n';

    return 0;
}
