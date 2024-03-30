#include <iostream>
#include <string>


struct Patron
{
    std::string name;
    double sum;
};

int main()
{
    using namespace std;

    int patronNumber;
    cout << "How many patrons: ";
    (cin >> patronNumber).get();

    Patron* patrons = new Patron[patronNumber];
    bool gpEmpty = true;
    bool pEmpty = true;

    for (int i = 0; i < patronNumber; ++i) {
        cout << "Patron " << i + 1 << " name: ";
        getline(cin, patrons[i].name);

        cout << "Patron " << i + 1 << " donate: $";
        (cin >> patrons[i].sum).get();

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
