#include "complex0.hpp"


Complex::Complex(double real, double imaginary)
{
    real_ = real;
    imaginary_ = imaginary;
}

Complex Complex::operator~() const
{
    return Complex(real_, -imaginary_);
}

Complex Complex::operator+(const Complex& number) const
{
    return Complex(real_ + number.real_, imaginary_ + number.imaginary_);
}

Complex Complex::operator-(const Complex& number) const
{
    return Complex(real_ - number.real_, imaginary_ - number.imaginary_);
}

Complex Complex::operator*(const Complex& number) const
{
    return Complex(real_ * number.real_ - imaginary_ * number.imaginary_,
                   real_ * number.imaginary_ + imaginary_ * number.real_);
}

Complex Complex::operator*(double number) const
{
    return Complex(real_ * number, imaginary_ * number);
}

Complex operator*(double number1, const Complex& number2)
{
    return number2 * number1;
}

std::istream& operator>>(std::istream& is, Complex& number)
{
    double real;
    double imaginary;

    std::cout << "real: ";
    if (!(is >> real))
        return is;
    std::cout << "imaginary: ";
    if (!(is >> imaginary))
        return is;

    number.real_ = real;
    number.imaginary_ = imaginary;

    return is;
}

std::ostream& operator<<(std::ostream& os, const Complex& number)
{
    os << "(" << number.real_ << "," << number.imaginary_ << "i)";

    return os;
}
