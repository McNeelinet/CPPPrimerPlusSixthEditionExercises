#ifndef QUEUE_HPP
#define QUEUE_HPP


template<typename Type>
class Queue
{
private:
    struct Node {
        Node(const Type& i) : item(i), next(nullptr) {}

        Type item;
        Node* next;
    };

    Node* front;
    Node* back;

public:
    Queue();
    Queue(const Queue& queue);
    Queue& operator=(const Queue& queue);

    bool isempty();
    bool push(const Type& item);
    bool pop(Type& item);

    ~Queue();
};

template<typename Type>
Queue<Type>::Queue()
{
    front = back = nullptr;
}

template<typename Type>
Queue<Type>::Queue(const Queue& queue)
{
    Node* current = queue.first;

    while (current != nullptr)
    {
        push(current->item);
        current = current->next;
    }
}

template<typename Type>
Queue<Type>& Queue<Type>::operator=(const Queue<Type>& queue)
{
    if (this == &queue)
        return *this;

    Node* current = queue.first;

    while (current != nullptr)
    {
        push(current->item);
        current = current->next;
    }

    return *this;
}

template<typename Type>
bool Queue<Type>::isempty()
{
    return front == nullptr;
}

template<typename Type>
bool Queue<Type>::push(const Type& item)
{
    Node* new_node = new Node(item);

    if (front == nullptr) {
        front = new_node;
    }
    else {
        back->next = new_node;
    }

    back = new_node;

    return true;
}

template<typename Type>
bool Queue<Type>::pop(Type& item)
{
    if (isempty())
        return false;

    item = front->item;
    Node* temp = front;

    front = front->next;
    delete temp;

    if (front == nullptr)
        back = nullptr;

    return true;
}

template<typename Type>
Queue<Type>::~Queue<Type>()
{
    Type temp;
    while (!isempty())
        pop(temp);
}

#endif // QUEUE_HPP
