#include "stack.hpp"

Stack::Stack(int n)
{
    pitems = new Item[n];

    size = n;
    top = 0;
}

Stack::Stack(const Stack& st)
{
    pitems = new Item[st.size];

    size = st.size;
    top = st.top;

    for (int i = 0; i < st.top; ++i)
        pitems[i] = st.pitems[i];
}

Stack& Stack::operator=(const Stack& st)
{
    if (this == &st)
        return *this;

    delete[] pitems;
    pitems = new Item[st.size];

    size = st.size;
    top = st.top;

    for (int i = 0; i < st.top; ++i)
        pitems[i] = st.pitems[i];

    return *this;
}

bool Stack::push(const Item& item)
{
    if (isfull())
        return false;

    pitems[top++] = item;

    return true;
}

bool Stack::pop(Item& item)
{
    if (isempty())
        return false;

    item = pitems[--top];

    return true;
}

Stack::~Stack()
{
    delete[] pitems;
}
