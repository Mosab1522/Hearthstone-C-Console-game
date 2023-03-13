#include <iostream>
#include "gameObject.hpp"

#ifndef STACK_INCLUDE
#define STACK_INCLUDE

typedef GameObject* ItemType;

class Stack
{
    int top;

public:
    Stack() : top(-1)
    {
    }

    ~Stack()
    {

    }
    ItemType a[50];

    bool push(ItemType x)
    {
        if (top >= (50 - 1))
        {
            return false;
        }
        else
        {
            a[++top] = x;
            return true;
        }
    }

    ItemType pop()
    {
        if (top < 0)
        {
            return 0;
        }
        else
        {
            ItemType x = a[top--];
            return x;
        }
    }


    bool isEmpty()
    {
        return (top < 0);
    }
};


#endif
