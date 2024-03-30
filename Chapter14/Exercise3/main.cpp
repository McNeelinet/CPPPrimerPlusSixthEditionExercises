#include <iostream>
#include <cstring>
#include "Queue.hpp"
#include "singingwaiter.hpp"


const int SIZE = 5;

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;

    Queue<Worker*> lolas;
    int ct;

    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Etner the employee category:\n"
             << "w: waiter s: singer "
             << "t: singing waiter q: quit\n";
        cin >> choice;

        while (strchr("wstq", choice) == NULL)
        {
            cout << "Please endter a w, s, t or q: ";
            cin >> choice;
        }

        if (choice == 'q')
            break;

        Worker* new_worker;
        switch(choice)
        {
        case 'w': new_worker = new Waiter;  // ну вот такое вот задание
            break;
        case 's': new_worker = new Singer;
            break;
        case 't': new_worker = new SingingWaiter;
            break;
        }

        cin.get();
        new_worker->Set();
        lolas.push(new_worker);
    }

    cout << "\nHere is your staff:\n";
    int i;

    for (i = 0; i < ct; ++i)
    {
        cout << endl;

        Worker* worker;
        lolas.pop(worker);
        worker->Show();

        delete worker;  // а то утечет
    }

    cout << "Bye.\n";
    return 0;
}
