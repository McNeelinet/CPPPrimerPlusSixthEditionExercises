#include <iostream>
#include <algorithm>


const int SIZE = 10;

long reduce(long ar[], int n);

int main()
{
    long ar[SIZE] = {1, 3, 5, 9, 5, 10, 6, 4, 10, 9};
    long res = reduce(ar, SIZE);

    for (int i = 0; i < res; ++i)
    {
        std::cout << ar[i] << " ";
    }

    return 0;
}

long reduce(long ar[], int n)
{
    std::sort(ar, ar + n);

    return std::unique(ar, ar + n) - ar;
}
