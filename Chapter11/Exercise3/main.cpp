#include <iostream>
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

    int attempts;
    int min_steps = 0;
    int max_steps = 0;
    int total_steps = 0;

    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
        cout << "Enter number of attempts: ";
        if (!(cin >> attempts))
            break;

        for (int i = 0; i < attempts; ++i)
        {
            while (result.magval() < target)
            {
                direction = rand() % 360;
                step.reset(dstep, direction, Vector::POL);
                result = result + step;
                steps++;
            }

            if (i == 0)
                min_steps = steps;

            if (steps < min_steps)
                min_steps = steps;
            else if (steps > max_steps)
                max_steps = steps;

            total_steps += steps;

            steps = 0;
            result.reset(0.0, 0.0);
        }

        cout << "After " << attempts << " attemps, the subject "
             << "did the following number of steps:\n";
        cout << "Maximum: " << max_steps << endl;
        cout << "Minimum: " << min_steps << endl;
        cout << "Average: " << total_steps / attempts << endl;

        min_steps = 0;
        max_steps = 0;
        total_steps = 0;

        cout << "Enter target distance (q to quit): ";
    }

    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}
