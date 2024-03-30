#include <iostream>
#include <cstring>

using namespace std;

const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);

void display1(student st);

void display2(const student* ps);

void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;

    while (cin.get() != '\n')
        continue;

    student* ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);

    for (int i = 0; i < entered; ++i) {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);

    delete[] ptr_stu;
    cout << "Done\n";

    return 0;
}

int getinfo(student pa[], int n)
{
    using namespace std;

    char temp[SLEN];
    int i;

    for (i = 0; i < n; ++i) {
        cout << "Student #" << (i + 1) << endl;
        cout << "Enter name: ";
        cin.getline(temp, SLEN);

        if (!(*temp)) {
            cout << "Interrupting..." << endl;
            break;
        }
        strncpy(pa[i].fullname, temp, SLEN);

        cout << "Enter hobby: ";
        cin.getline(pa[i].hobby, SLEN);

        cout << "Enter ooplevel: ";
        (cin >> pa[i].ooplevel).get();
    }

    return i;
}

void display1(student st)
{
    cout << "Fullname: " << st.fullname << endl;
    cout << "Hobby: " << st.hobby << endl;
    cout << "OOP Level: " << st.ooplevel << endl;
}

void display2(const student* ps)
{
    cout << "Fullname: " << ps->fullname << endl;
    cout << "Hobby: " << ps->hobby << endl;
    cout << "OOP Level: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
    for (int i = 0; i < n; ++i) {
        cout << "Student #" << (i + 1) << ": " << endl;
        display2(pa + i);
    }
}
