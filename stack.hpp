#include "stack.h"
using namespace std;
template<class T>
int Stack<T>::size(){
    return _size;
}
template<class T>
int Stack<T>::capacity(){
    return _capacity;
}
template<class T>
T &Stack<T>::top(){
    return stack[_size-1];
}
template <class T>
void Stack<T>::pop(){
    _size=max(0,_size-1);
}
template <class T>
void Stack<T>::push(T x){
    if(_size<_capacity)
        stack[_size++]=x;
    else{
        T *aux;
        aux=new T[2*_capacity+1];
        _capacity=_capacity*2+1;
        for(int i=0;i<_size;i++)
            aux[i]=stack[i];
        delete []stack;
        stack=aux;
        stack[_size++]=x;
    }
}
template<class T>
Stack<T>::Stack(){
    _size=0;
    _capacity=0;
}
template<class T>
Stack<T>::Stack(int x){
    _size=0;
    stack=new T[x+1];
    _capacity=x+1;
}
template<class T>
T&Stack<T>::operator[](int x){
    return stack[x];
}
template<class T>
void Stack<T>::clear(){
    delete[]stack;
    _size=0;
    _capacity=0;
}
