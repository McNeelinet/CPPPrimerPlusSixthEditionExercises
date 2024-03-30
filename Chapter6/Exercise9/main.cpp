#include <iostream>
#include <fstream>
#include <string>


struct Patron
{
    std::string name;
    double sum;
};

int main()
{
    using namespace std;

    ifstream inputFile;
    inputFile.open("file.txt");

    int patronNumber;
    (inputFile >> patronNumber).get();

    Patron* patrons = new Patron[patronNumber];
    bool gpEmpty = true;
    bool pEmpty = true;

    for (int i = 0; i < patronNumber; ++i) {
        getline(inputFile, patrons[i].name);
        (inputFile >> patrons[i].sum).get();

        if (patrons[i].sum >= 10000)
            gpEmpty = false;
        else
            pEmpty = false;
    }

    cout << "Grand Patrons" << endl;
    if (gpEmpty)
        cout << "none" << endl;
    else
        for (int i = 0; i < patronNumber; ++i)
            if (patrons[i].sum >= 10000)
                cout << patrons[i].name << ": $" << patrons[i].sum << endl;



    cout << endl << "Patrons" << endl;
    if (pEmpty)
        cout << "none" << endl;
    else
        for (int i = 0; i < patronNumber; ++i)
            if (patrons[i].sum < 10000)
                cout << patrons[i].name << ": $" << patrons[i].sum << endl;

    delete[] patrons;
    return 0;
}
