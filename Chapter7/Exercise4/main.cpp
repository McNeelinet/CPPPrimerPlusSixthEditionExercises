#include <iostream>


long double probability(unsigned numbers, unsigned picks, unsigned meganumber);

int main()
{
    using namespace std;

    double numbers, choices, meganumber;

    cout << "Enter the usual number of choices on the game card, \n"
            "the number of picks allowed for it and the number of choices for meganumber:\n";
    while ((cin >> numbers >> choices >> meganumber) && choices <= numbers) {
        cout << "You have one chance in ";
        cout << probability(numbers, choices, meganumber);
        cout << " of winning.\n";
        cout << "Next three numbers (q to quit): ";
    }

    cout << "bye\n";
    return 0;
}

long double probability(unsigned numbers, unsigned picks, unsigned meganumber)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result * meganumber;
}
