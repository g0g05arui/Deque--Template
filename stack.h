#ifndef _QUEUE_H_
#define _QUEUE_H_
template <class T>
class Stack{
private:
    T *stack;
    int _size,_capacity;
public:
    int size();
    Stack();
    Stack(int);
    T &top();
    void pop();
    void push(T);
    int capacity();
    T & operator[](int);
    void clear();
};
#include "stack.hpp"
#endif // _QUEUE_H_
