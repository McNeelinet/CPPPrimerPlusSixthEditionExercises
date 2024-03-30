#include <iostream>


int inputArray(int results[], int size);
void printArray(int results[], int size);
double calcAverage(int results[], int size);

const int ARR_SIZE = 10;

int main()
{
    int results[ARR_SIZE];

    int elemCount = inputArray(results, ARR_SIZE);
    printArray(results, elemCount);
    std::cout << "Average is: " << calcAverage(results, elemCount) << std::endl;

    return 0;
}

int inputArray(int results[], int size)
{
    using namespace std;

    int temp;
    int i;

    for (i = 0; i < size; ++i) {
        cout << "Enter result #" << (i + 1) << ": ";
        cin >> temp;

        if (!cin) {
            cin.clear();
            while (cin.get() != '\n')
                continue;

            cout << "Bad input; input process terminated." << endl;
            break;
        }
        else if (temp < 0)
            break;

        results[i] = temp;
    }

    return i;
}

void printArray(int results[], int size)
{
    using namespace std;

    for (int i = 0; i < size; ++i) {
        cout << results[i] << " ";
    }
    cout << endl;
}

double calcAverage(int results[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; ++i)
        sum += results[i];

    return (double)sum / size;
}
