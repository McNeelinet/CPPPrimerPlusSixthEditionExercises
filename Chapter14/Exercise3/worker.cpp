#include "worker.hpp"
#include <iostream>


using std::cout;
using std::endl;
using std::cin;

Worker::~Worker() {}

void Worker::Data() const
{
    cout << "Name: " << fullname << endl;
    cout << "Employee ID: " << id << endl;
}

void Worker::Get()
{
    getline(cin, fullname);
    cout << "Enter workers's ID: ";
    cin >> id;
    while (cin.get() != '\n')
        continue;
}
