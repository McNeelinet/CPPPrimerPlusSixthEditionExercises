#include <iostream>
#include <cstring>


template <typename T>
T maxn(const T array[], int n);

template <>
const char* maxn(const char* const array[], int n);

const int SIZE1 = 4;
const int SIZE2 = 6;

int main()
{
    using namespace std;

    double dArray[SIZE1] = {0.9, 4.5, 1.9, 1.1};
    int iArray[SIZE2] = {5, 1, 2, 6};
    const char* cArray[SIZE1] = {"Hello world!",
                                 "I want pizza",
                                 "Another string",
                                 "QWERTY"};

    cout << maxn(dArray, SIZE1) << endl;
    cout << maxn(iArray, SIZE2) << endl;
    cout << maxn(cArray, SIZE1) << endl;

    return 0;
}

template <typename T>
T maxn(const T array[], int n)
{
    T max = array[0];

    for (int i = 0; i < n; ++i)
        if (array[i] > max)
            max = array[i];

    return max;
}

template <>
const char* maxn(const char* const array[], int n)
{
    const char* max = array[0];

    for (int i = 0; i < n; ++i)
        if (strlen(array[i]) > strlen(max))
            max = array[i];

    return max;
}
