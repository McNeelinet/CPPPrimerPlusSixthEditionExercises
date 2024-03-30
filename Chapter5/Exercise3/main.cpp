#include <iostream>


int main()
{
    using namespace std;

    int sum = 0;
    int num;
    cin >> num;

    while (num != 0) {
        sum += num;
        cout << "Current sum: " << sum << endl;
        cin >> num;
    }

    return 0;
}
