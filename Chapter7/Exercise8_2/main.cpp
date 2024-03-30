#include <iostream>
#include <array>
#include <string>


const int Seasons = 4;
const char* Snames[] = {
    "Spring",
    "Summer",
    "Fall",
    "Winter"
};

struct Expenses
{
    double expenses[Seasons];
};

void fill(Expenses* pa);
void show(Expenses da);

int main()
{
    Expenses expenses;
    fill(&expenses);
    show(expenses);

    return 0;
}

void fill(Expenses* pa)
{
    using namespace std;

    for (int i = 0; i < Seasons; i++) {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa->expenses[i];
    }
}

void show(Expenses da)
{
    using namespace std;

    double total = 0.0;

    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++) {
        cout << Snames[i] << ": $" << da.expenses[i] << endl;
        total += da.expenses[i];
    }
    cout << "Total Expenses: $" << total << endl;
}
