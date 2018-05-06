#ifndef DEQUE_HPP
#define DEQUE_HPP
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

}
#endif // DEQUE_HPP
