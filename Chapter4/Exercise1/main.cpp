#include <iostream>


int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    std::string firstName, lastName;

    cout << "What is your first name? ";
    std::getline(cin, firstName);

    cout << "Whar is your last name? ";
    std::getline(cin, lastName);

    char grade;
    cout << "What letter grade do you deserve? ";
    cin >> grade;

    int age;
    cout << "What is your age? ";
    cin >> age;

    cout << "Name: " << lastName
         << ", " << firstName << endl;
    cout << "Grade: " << ++grade << endl;
    cout << "Age: " << age << endl;

    return 0;
}
