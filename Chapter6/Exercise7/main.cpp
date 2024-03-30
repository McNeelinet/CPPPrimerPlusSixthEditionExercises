#include <iostream>
#include <string>
#include <cctype>


int main()
{
    using namespace std;

    string word;
    int vovels = 0;
    int consonants = 0;
    int others = 0;

    while ((cin >> word) and word != "q") {
        if (not isalpha(word[0]))
            ++others;
        else
            switch (word[0]) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
            case 'y':
            case 'Y':
                ++vovels;
                break;
            default:
                ++consonants;
            }
    }

    cout << vovels << " words beginning with vowels" <<endl;
    cout << consonants << " words beginning with consonants" << endl;
    cout << others << " others" << endl;

    return 0;
}
