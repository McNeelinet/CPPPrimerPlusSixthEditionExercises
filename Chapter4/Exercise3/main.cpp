#include <iostream>
#include <cstring>


int main()
{
    using std::strlen;
    using std::strcpy;
    using std::strcat;

    char firstName[20];
    std::cout << "Enter your first name: ";
    std::cin.getline(firstName, 20);

    char lastName[20];
    std::cout << "Enter your last name: ";
    std::cin.getline(lastName, 20);

    char* fullName = new char[strlen(lastName) + strlen(firstName) + 3];

    strcpy(fullName, lastName);
    strcat(fullName, ", ");
    strcat(fullName, firstName);

    std::cout << "Here's the information in a single string: "
              << fullName << std::endl;

    delete[] fullName;
    return 0;
}
