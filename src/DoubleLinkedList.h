//
// Created by andre on 10/16/2021.
//


#ifndef SIMPLESTUDENTRECORDSYSTEM_DOUBLELINKEDLIST_H
#define SIMPLESTUDENTRECORDSYSTEM_DOUBLELINKEDLIST_H

#include "DoubleNode.h"

template<typename T>
class DoubleLinkedList {
protected:
    DoubleNode<T> *head = nullptr;
public:
    DoubleLinkedList() {

    }

    DoubleNode<T> getHead() {
        return head;
    }

    T getData(T data) const{
        DoubleNode<T> *p;
        p = head;
        while (p->getData() != data && p->getNext() != nullptr){
            p = p->getNext();
        }
        if(p->getData() == data){
            return p->getData();
        }else{
            abort();
        }
    }

    T& getData(T data){
        DoubleNode<T> *p;
        p = head;
        while (p->getData() != data && p->getNext() != nullptr){
            p = p->getNext();
        }
        if(p->getData() == data){
            return p->getData();
        }else{
            abort();
        }
    }

    void add(T data) {
        if (head != nullptr) {
            DoubleNode<T> *p;
            p = head;
            //special case for a list of length one, to avoid out of bounds when using two getnexts
            if (p->getNext() == nullptr) {
                p->setNext(new DoubleNode<T>(data));
                p = p->getNext();
                p->setPrevious(head);
                return;
            }
            //While the next object is not the last one
            while (p->getNext()->getNext() != nullptr) {
                p = p->getNext();
            }
            //Record the pointer before the match
            DoubleNode<T> *temp = p;
            //move to the match
            p = p->getNext();
            //link to the previous pointer
            p->setPrevious(temp);
            //Set the next pointer to the new entry
            p->setNext(new DoubleNode<T>(data));
            //record the pointer before the new entry
            temp = p;
            //move to the new entry
            p = p->getNext();
            //link the new entry to the previous entry
            p->setPrevious(temp);
        } else {
            head = new DoubleNode<T>(data);
        }
    }

    void remove(T data) {
        //Iterate through the list sequentially until the data is matched
        DoubleNode<T> *p;
        p = head;
        if (head->getData() != data) {
            /**
             * Comparing ahead of the pointer to preserve the previous
             * pointer, so deletion in body case does not require another
             * iteration to link the previous and next node.
             */
            //while the next node is not the end of the list and doesn't match the data
            while (p->getNext() != nullptr &&
                   p->getNext()->getData() != data) {
                p = p->getNext();
            }
            //in the case that there are no matches of the data
            //because it escapes the while loop if it reaches the end regardless of match
            //check the last node's data.
            if (p->getNext()->getData() != data) {
                return;
            }
        } else {//if the match is at the head
            head = head->getNext();
            delete p;
        }

        //p is the node before the match UNLESS it is the head
        if (p->getNext()->getNext() != nullptr) {//if the match is in the body

            DoubleNode<T> *temp_pointer = p->getNext();
            //link p to the node after the match
            p->setNext(temp_pointer->getNext());
            delete temp_pointer;
        } else {//if the match is at the end
            DoubleNode<T> *temp_pointer = p->getNext();
            delete temp_pointer;
            p->setNext(nullptr);
        }
    }

    DoubleNode<T> *search(T data) {
        DoubleNode<T> *p = head;
        while (p->getData() != data && p->getNext() != nullptr){
            p = p->getNext();
        }
        if(p->getData() == data){
            return p;
        }
    }

    friend std::ostream &operator<<(std::ostream &os, const DoubleLinkedList &doubleLinkedList) {
        DoubleNode<T> *p;
        p = doubleLinkedList.head;
        while (p != nullptr) {
            os << "\nData: " << p->getData()
                               << "\nNext Pointer: " << p->getNextasString()
                               << "\nPrevious Pointer: " << p->getPreviousasString();
            p = p->getNext();
        }
        return os;
    }

    virtual ~DoubleLinkedList() {
        DoubleNode<T> *p = nullptr;
        while (head) {
            p = head;
            delete p;
            head = head->getNext();
        }
    }
};


#endif //SIMPLESTUDENTRECORDSYSTEM_DOUBLELINKEDLIST_H
