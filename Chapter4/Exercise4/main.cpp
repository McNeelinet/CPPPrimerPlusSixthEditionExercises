#include <iostream>
#include <string>


int main()
{
    using std::string;
    using std::getline;

    string firstName;
    std::cout << "Enter your first name: ";
    getline(std::cin, firstName);

    string lastName;
    std::cout << "Enter your last name: ";
    getline(std::cin, lastName);

    string fullName = lastName + ", " + firstName;

    std::cout << "Here's the information in a single string: "
              << fullName << std::endl;

    return 0;
}
