#include <iostream>
#include <cstring>


using namespace std;

struct stringy {
    char* str;
    int ct;
};

void show(const char* str, int n = 1);
void show(const stringy& str, int n = 1);
void set(stringy& dst, const char* src);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);  // Первым аргументом является ссылка,
        // Выделяет пространство для хранения копии testing,
        // использует элемент типа str структуры beany как указатель
        // на новый блок, копирует testing в новый блок и
        // создает элемент ct структуры beany
    show(beany);     // Выводит строковый член структуры один раз
    show(beany, 2);  // Выводит строковый член структуры два раза

    testing[0] = 'D';
    testing[1] = 'u';

    show(testing);     // Выводит строку testing один раз
    show(testing, 3);  // Выводит строку testing три раза
    show("Done!");

    delete[] beany.str;
    return 0;
}

void show(const char* str, int n)
{
    for (int i = 0; i < n; ++i)
        cout << str << endl;
}

void show(const stringy& str, int n)
{
    for (int i = 0; i < n; ++i)
        cout << str.str << endl;
}

void set(stringy& dst, const char* src)
{
    dst.ct = strlen(src);
    dst.str = new char[dst.ct + 1];  // ай
    strncpy(dst.str, src, dst.ct + 1);  // strncpy вставит терминальный нуль
}
