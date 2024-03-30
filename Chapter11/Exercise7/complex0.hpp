#ifndef COMPLEX0_HPP
#define COMPLEX0_HPP

#include <iostream>


class Complex
{
public:
    Complex(double real = 0, double imaginary = 0);

    // Сопряжение
    Complex operator~() const;

    // Сложение
    Complex operator+(const Complex& number) const;

    // Вычитание
    Complex operator-(const Complex& number) const;

    // Умножение на комплексное число
    Complex operator*(const Complex& number) const;

    // Умножение на вещественное число
    Complex operator*(double number) const;
    friend Complex operator*(double number1, const Complex& number2);

    // Ввод-вывод
    friend std::istream& operator>>(std::istream& is, Complex& number);
    friend std::ostream& operator<<(std::ostream& os, const Complex& number);
private:
    double real_;
    double imaginary_;
};


#endif // COMPLEX0_HPP
