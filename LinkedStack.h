// Author       :   Alex Kourkoumelis
// Date         :   11/12/2017
// Title        :   BarberShop
// Description  :   Manages a barbershop utilizing a LinkedStack data structure
//              :   Creates a BarberShop object, BarberShop creates 2 LinkedStacks
//              :   The LinkedStacks accept Customer Objects
//              :   Customers are shuffled while inserting to make sure they are served in order

#ifndef PART_II_ATTEMPT_1_LINKEDSTACK_H
#define PART_II_ATTEMPT_1_LINKEDSTACK_H

#include <iostream>
using namespace std;

template <class T>
struct node{
    T data;
    node<T>* next;
};

template <class T>
class LinkedStack{
    node<T> *top;
public:

    LinkedStack();
    void push(T&);
    T pop();
    bool isEmpty();
    void destroyList();
    ~LinkedStack();
};

template <class T>
LinkedStack<T>::LinkedStack(){
    top = NULL;
}
template <class T>
void LinkedStack<T>::push(T& item){
    node<T> *p = new node<T>;
    p->data = item;
    p->next = top;
    top = p;
}
template <class T>
T LinkedStack<T>::pop(){
    node<T> *p = top;
    top = top->next;
    T data = p->data;
    delete p;
    return data;
}
template <class T>
bool LinkedStack<T>::isEmpty(){
    return top == NULL;
}
template <class T>
void LinkedStack<T>::destroyList(){
    node<T> *p;
    while(top != NULL){
        p = top;
        top = top->next;
        delete p;
    }
}
template <class T>
LinkedStack<T>::~LinkedStack(){
    destroyList();
}

#endif //PART_II_ATTEMPT_1_LINKEDSTACK_H
