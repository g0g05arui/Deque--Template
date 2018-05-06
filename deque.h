#ifndef DEQUE_H
#define DEQUE_H
#include "stack.h"
template<class T>
class Deque{
private:
    Stack<T>frontStack,backStack;
public:
    void push_back(T);
    void push_front(T);
    void pop_back();
    void pop_front();
    T & back();
    T & front();
    void insert(int,T);
    int size();
    int capacity();
    T & operator[](int);
    void erase(int);
    void clear();
};
#include "deque.hpp"
#endif // DEQUE_H

