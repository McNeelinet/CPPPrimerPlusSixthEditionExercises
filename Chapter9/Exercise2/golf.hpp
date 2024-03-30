#ifndef GOLF_HPP
#define GOLF_HPP


#include <string>


const int Len = 40;
struct golf
{
    std::string fullname;
    int handicap;
};

// Неинтерактивная версия:
// Функция присваивает структуре типа golf имя игрока и его гандикап (фору),
// используя передаваемые ей аргумента
void setgolf(golf& g, std::string name, int hs);

// Интерактивная версия:
// Функция предлагает пользователю ввести имя и гандикап,
// присваивает элементам структуры g введенные значения;
// возвращает 1, если введено имя, и 0, если введена пустая строка
int setgolf(golf& g);

// Функция устанавливает новое значение гандикапа
void handicap(golf& g, int hc);

// Функция отображает содержимое структуры типа golf
void showgolf(const golf& g);


#endif // GOLF_HPP
