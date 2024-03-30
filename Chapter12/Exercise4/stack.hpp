#ifndef STACK_HPP
#define STACK_HPP


typedef unsigned long Item;

class Stack
{
public:
    Stack(int n = MAX);
    Stack(const Stack& st);
    ~Stack();

    bool isempty() const { return top == 0; };
    bool isfull() const { return top == size; };

    bool push(const Item& item);
    bool pop(Item& item);

    Stack& operator=(const Stack& st);
private:
    enum {MAX = 10};
    Item* pitems;
    int size;
    int top;
};

#endif // STACK_HPP
