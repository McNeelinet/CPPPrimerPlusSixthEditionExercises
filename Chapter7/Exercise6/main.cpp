#include <iostream>

int ARRAY_SIZE = 16;

int Fill_array(double array[], int size);
void Show_array(double array[], int size);
void Reverse_array(double array[], int size);

int main()
{
    double array[ARRAY_SIZE];

    int elemCount = Fill_array(array, ARRAY_SIZE);
    Show_array(array, elemCount);
    Reverse_array(array, elemCount);
    Show_array(array, elemCount);

    return 0;
}


int Fill_array(double array[], int size)
{
    using namespace std;

    int temp;
    int i;

    for (i = 0; i < size; ++i) {
        cout << "Enter element #" << (i + 1) << ": ";
        cin >> temp;

        if (!cin) {
            cin.clear();
            while (cin.get() != '\n')
                continue;

            cout << "Bad input; input process terminated." << endl;
            break;
        }

        array[i] = temp;
    }

    return i;
}

void Show_array(double array[], int size)
{
    for (int i = 0; i < size; ++i)
        std::cout << array[i] << " ";
    std::cout << std::endl;
}

void swap(double* num1, double* num2)
{
    double temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void Reverse_array(double array[], int size)
{
    for (int i = 1; i < size / 2; ++i)
        swap(array + i, array + size - 1 - i);
}
