#include <iostream>
#include <cstring>


int main()
{
    using namespace std;

    int counter = 0;
    char word[21];

    cout << "Enter the words (to stop, enter the word \"done\")" << endl;
    cin >> word;
    while (strcmp(word, "done")) {
        counter += 1;
        cin >> word;
    }

    cout << "You entered " << counter << " words." << endl;

    return 0;
}
