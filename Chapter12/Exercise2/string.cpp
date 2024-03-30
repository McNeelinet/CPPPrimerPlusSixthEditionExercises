#include "string.hpp"
#include <cstring>


using std::cin;
using std::cout;

int String::num_strings = 0;

int String::HowMany()
{
    return num_strings;
}

String::String(const char* s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);

    num_strings++;
}

String::String()
{
    len = 4;
    str = new char[1];
    str[0] = '\0';

    num_strings++;
}

String::String(const String& st)
{
    num_strings++;

    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
}

String::~String()
{
    --num_strings;

    delete[] str;
}

void String::StringLow()
{
    for (int i = 0; i < len; i++)
        str[i] = tolower(str[i]);
}

void String::StringUp()
{
    for (int i = 0; i < len; i++)
        str[i] = toupper(str[i]);
}

int String::Count(char c)
{
    int counter = 0;

    for (int i = 0; i < len; i++)
        if (str[i] == c)
            counter++;

    return counter;
}

String& String::operator=(const String& st)
{
    if (this == &st)
        return *this;

    delete[] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);

    return *this;
}

String& String::operator=(const char* s)
{
    delete[] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);

    return *this;
}

char& String::operator[](int i)
{
    return str[i];
}

const char& String::operator[](int i) const
{
    return str[i];
}

String operator+(const String& st1, const String& st2)
{
    char* temp = new char[st1.len + st2.len + 1];
    strcpy(temp, st1.str);
    strcat(temp, st2.str);

    String result(temp);
    delete[] temp;

    return result;
}

bool operator<(const String& st1, const String& st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String& st1, const String& st2)
{
    return st2 < st1;
}

bool operator==(const String& st1, const String& st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}

ostream& operator<<(ostream& os, const String& st)
{
    os << st.str;

    return os;
}

istream& operator>>(istream& is, String& st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);

    if (is)
        st = temp;

    while (is && is.get() != '\n')
        continue;

    return is;
}