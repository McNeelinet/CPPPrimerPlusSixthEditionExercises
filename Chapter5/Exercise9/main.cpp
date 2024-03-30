#include <iostream>
#include <string>


int main()
{
    using namespace std;

    int counter = 0;
    string word;

    cout << "Enter the words (to stop, enter the word \"done\")" << endl;
    cin >> word;
    while (word != "done") {
        counter += 1;
        cin >> word;
    }

    cout << "You entered " << counter << " words." << endl;

    return 0;
}
