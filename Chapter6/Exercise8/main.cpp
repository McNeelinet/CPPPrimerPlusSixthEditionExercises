#include <iostream>
#include <fstream>


int main()
{
    using namespace std;

    ifstream inputFile;
    inputFile.open("file.txt");

    int counter = 0;
    while (inputFile.get() != EOF)
        ++counter;

    cout << "Chars in file: " << counter << endl;

    return 0;
}
