//
// Created by andre on 10/13/2021.
//

#ifndef SIMPLESTUDENTRECORDSYSTEM_DOUBLENODE_H
#define SIMPLESTUDENTRECORDSYSTEM_DOUBLENODE_H

#include <sstream>
#include <iostream>
template<typename T>
class DoubleNode {
protected:
    T data;
    DoubleNode *next = nullptr;
    DoubleNode *previous = nullptr;
public:
    DoubleNode() {

    }

    DoubleNode(T data) {
        this->data = data;
    }

    DoubleNode(T data, DoubleNode *next) {
        this->data = data;
        this->next = next;
    }

    T getData() const {
        return data;
    }

    void setData(T data) {
        DoubleNode::data = data;
    }

    DoubleNode *getNext() const {
        return next;
    }

    std::string getNextasString() const {
        std::ostringstream oss;
        oss  << next;
        std::string get_next = oss.str();
        return get_next;
    }

    void setNext(DoubleNode *next) {
        DoubleNode::next = next;
    }

    void setPrevious(DoubleNode *previous){

    }
};


#endif //SIMPLESTUDENTRECORDSYSTEM_DOUBLENODE_H
