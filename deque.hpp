#ifndef DEQUE_HPP
#define DEQUE_HPP
#include <algorithm>
template<class T>
void Deque<T>::push_back(T x){
    backStack.push(x);
}
template<class T>
void Deque<T>::push_front(T x){
    frontStack.push(x);
}
template<class T>
void Deque<T>::pop_back(){
    frontStack.pop();
}
template<class T>
void Deque<T>::pop_front(){
    backStack.pop();
}
template<class T>
T &Deque<T>:: back(){
    return backStack.top();
}
template<class T>
T & Deque<T>::front(){
    return frontStack.top();
}
template<class T>
int Deque<T>::size(){
    return backStack.size()+frontStack.size();
}
template<class T>
int Deque<T>::capacity(){
  return  backStack.capacity()+frontStack.capacity();
}
template<class T>
T &Deque<T>:: operator[](int poz){
   if(poz>=frontStack.size())
      return backStack[poz-frontStack.size()];
   else
      return frontStack[frontStack.size()-poz-1];
}
template<class T>
void erase(int);
template<class T>
void Deque<T>::clear(){
    backStack.clear();
    frontStack.clear();
}
template<class T>
void Deque<T>::insert(int poz,T x){
    if(poz<frontStack.size()){
        Stack<T> aux(0);
        for(int i=frontStack.size()-1;i>frontStack.size()-poz-1;i--)
            aux.push(frontStack[i]);
        aux.push(x);
        for(int i=frontStack.size()-poz-1;i>=0;i--)
            aux.push(frontStack[i]);
        frontStack=aux;
        reverse(&frontStack[0],&frontStack[frontStack.size()-1]+1);
    }
    else{
        Stack<T>aux(0);
        poz-=frontStack.size();
        for(int i=0;i<poz;i++)
            aux.push(backStack[i]);
        aux.push(x);
        for(int i=poz;i<backStack.size();i++)
            aux.push(backStack[i]);
        backStack=aux;
    }
}
#endif // DEQUE_HPP
