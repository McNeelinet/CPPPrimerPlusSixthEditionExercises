#include <algorithm>
#include <iostream>
#include <string>


const int SIZE = 10;

template<class T>
long reduce(T ar[], int n)
{
    std::sort(ar, ar + n);

    return std::unique(ar, ar + n) - ar;
}

int main()
{
    long ar_long[SIZE] = {1, 3, 5, 9, 5,
                          10, 6, 4, 10, 9};
    long res_long = reduce(ar_long, SIZE);

    std::string ar_string[SIZE] = {"one", "three", "five", "nine", "five",
                                   "ten", "six", "four", "ten", "nine"};
    long res_string = reduce(ar_string, SIZE);

    for (int i = 0; i < res_long; ++i)
    {
        std::cout << ar_long[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < res_string; ++i)
    {
        std::cout << ar_string[i] << " ";
    }

    return 0;
}
