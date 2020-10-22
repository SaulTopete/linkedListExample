//
// Created by Saul Topete on 10/19/20.
//

#ifndef LINKEDLISTEXAMPLE_LINKEDLIST_CPP
#define LINKEDLISTEXAMPLE_LINKEDLIST_CPP
#include "LinkedList.h"

template <class T>
LinkedList<T>::LinkedList() {
    head = nullptr;
    tail = nullptr;
}

template <class T>
std::ostream& operator<<(std::ostream& outs, const LinkedList<T>& list){
    Node<T>* walker = list.head;

    while(walker != nullptr){
        outs.width(5);
        outs << walker -> next;
        walker = walker -> next;
    }
    return outs;
}

template <class T>
void LinkedList<T>::add(T item){
    Node<T>* temp = createNode(item);

    if(head == nullptr){
        head = temp;
        tail = temp;
    }

    else{
        tail->next = temp;
        tail = temp;
    }
}

template <class T>
Node<T>* LinkedList<T>::createNode(T item){
    Node<T>* temp = new Node<T>;
    temp->data = item;
    temp->next = nullptr;
    temp->prev = nullptr;
    return temp;
}

template <class T>
void LinkedList<T>::addFront(T item) {

    //Step 1 & 2:
    Node<T>* temp = createNode(item);

    //when item is the first node
    if(head == nullptr){
        //
        head = temp;
        tail = temp;
    }

    else{
        //Step 3:
        temp->next = head;

        //Step 4:
        head->prev = temp;

        //Step 5:
        head = temp;
    }

}

#endif //LINKEDLISTEXAMPLE_LINKEDLIST_CPP