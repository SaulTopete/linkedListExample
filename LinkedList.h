//
// Created by Saul Topete on 10/19/20.
//

#ifndef LINKEDLISTEXAMPLE_LINKEDLIST_H
#define LINKEDLISTEXAMPLE_LINKEDLIST_H
#include "Node.h"
#include <iostream>

template <class T>

class LinkedList {

private:
    Node<T>* head;
    Node<T>* tail;
    Node<T>* createNode(T item);

public:
    LinkedList();
    template <class S>
    friend std::ostream& operator<<(std::ostream& outs, const LinkedList<S>& list);
    void add(T item);
    void addFront(T item);

};

#include "LinkedList.cpp"
#endif //LINKEDLISTEXAMPLE_LINKEDLIST_H
