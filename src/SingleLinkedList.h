//
// Created by andre on 10/12/2021.
//
#include "SingleNode.h"
#include <iostream>
#ifndef SIMPLESTUDENTRECORDSYSTEM_SINGLELINKEDLIST_H
#define SIMPLESTUDENTRECORDSYSTEM_SINGLELINKEDLIST_H

template<typename T>
class SingleLinkedList {
protected:
    SingleNode<T> *head = nullptr;
public:
    SingleLinkedList() {

    }
    SingleNode<T> getHead(){
        return head;
    }

    T getData(T data) const{
        SingleNode<T> *p;
        p = head;
        while (p->getData() != data && p->getNext() != nullptr){
            p = p->getNext();
        }
        if(p->getData() == data){
            return p->getData();
        }else{
            cout << "Single member not found in list" << endl;
            abort();
        }
    }

    T& getData(T data){
        SingleNode<T> *p;
        p = head;
        while (p->getData() != data && p->getNext() != nullptr){
            p = p->getNext();
        }
        if(p->getData() == data){
            return p->getData();
        }else{
            cout << "Single member not found in list" << endl;
            abort();
        }
    }

    SingleNode<T> *search(T data) {
        SingleNode<T> *p = head;
        while (p->getData() != data && p->getNext() != nullptr){
            p = p->getNext();
        }
        if(p->getData() == data){
            return p;
        }
    }

    void add(T data) {
        if (head != nullptr) {
            SingleNode<T> *p;
            p = head;
            //Start iterating at the head until the end
            while (p->getNext() != nullptr) {
                p = p->getNext();
            }
            p->setNext(new SingleNode<T>(data));
        } else {
            head = new SingleNode<T>(data);
        }
    }

    void remove(T data) {
        //Iterate through the list sequentially until the data is matched
        SingleNode<T> *p;
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

            SingleNode<T> *temp_pointer = p->getNext();
            //link p to the node after the match
            p->setNext(temp_pointer->getNext());
            delete temp_pointer;
        } else {//if the match is at the end
            SingleNode<T> *temp_pointer = p->getNext();
            delete temp_pointer;
            p->setNext(nullptr);
        }
    }

    friend std::ostream& operator<<(std::ostream& os, const SingleLinkedList<T>& singleLinkedList){
        SingleNode<T> *p;
        p = singleLinkedList.head;
        while (p != nullptr){
            os << "\nData: " << p->getData()
               << "\nNext Pointer: " << p->getNextasString();
            p = p->getNext();
        }
        return os;
    }

    virtual ~SingleLinkedList() {
        SingleNode<T> *p = nullptr;
        while (head) {
            p = head;
            delete p;
            head = head->getNext();
        }
    }
};







#endif //SIMPLESTUDENTRECORDSYSTEM_SINGLELINKEDLIST_H
