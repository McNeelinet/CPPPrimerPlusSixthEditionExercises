#include <iostream>


template <typename T>
T max5(const T array[]);

int main()
{
    using namespace std;

    double dArray[5] = {2.1, 4.1, 1.8, 1.1, 2.3};
    int iArray[5] = {2, 4, 7, 1, 6};

    cout << "Max from double array: ";
    cout << max5(dArray) << endl;

    cout << "Max from int array: ";
    cout << max5(iArray) << endl;

    return 0;
}

template <typename T>
T max5(const T array[])
{
    T max = array[0];

    for (int i = 0; i < 5; ++i)
        if (array[i] > max)
            max = array[i];

    return max;
}
