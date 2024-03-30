#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "vect.hpp"


int main()
{
    using namespace std;
    using VECTOR::Vector;

    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;

    ofstream out;
    out.open("output.txt");

    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;

        out << "Target Distance: " << target << ", "
            << "Step Size: " << dstep << endl;
        out << "0: " << result << endl;

        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
            out << steps << ": "<< result << endl;
        }

        out << "After " << steps << " steps, the subject "
             << "has the following location:\n";
        out << result << endl;

        out << "or" << endl;
        result.polar_mode();
        out << result << endl;

        out << "Average outward distance per step = "
             << result.magval() / steps << endl;
        out << endl;

        steps = 0;
        result.reset(0.0, 0.0);

        cout << endl << "Enter target distance (q to quit): ";
    }

    out.close();
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}
