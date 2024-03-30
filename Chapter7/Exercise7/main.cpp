#include <iostream>


const int Max = 5;

double* fill_array(double* begin, double* end);
void show_array(const double* begin, const double* end);
void revalue(double* begin, double* end, double r);

int main()
{
    using namespace std;

    double properties[Max];

    double* end = fill_array(properties, properties + Max);
    show_array(properties, end);

    if (end > properties) {
        cout << "Enter revaluation factor: ";
        double factor;
        while (not(cin >> factor)) {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(properties, end, factor);
        show_array(properties, end);
    }

    cout << "Done.\n";
    cin.get();
    cin.get();

    return 0;
}

double* fill_array(double* begin, double* end)
{
    using namespace std;

    double temp;
    double* p;

    for (p = begin; p != end; ++p) {
        cout << "Enter value #" << (p - begin + 1) << ": ";
        cin >> temp;

        if (!cin) {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)
            break;
        *p = temp;
    }

    return p;
}

void show_array(const double* begin, const double* end)
{
    using namespace std;

    for (const double* p = begin; p != end; ++p) {
        cout << "Property #" << (p - begin + 1) << ": $";
        cout << *p << endl;
    }
}

void revalue(double* begin, double* end, double r)
{
    for (double* p = begin; p != end; ++p)
        *p *= r;
}
