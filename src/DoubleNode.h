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

    DoubleNode(T data, DoubleNode *next, DoubleNode *previous) {
        this->data = data;
        this->next = next;
        this->previous = previous;
    }

    T getData() const {
        return data;
    }

    T& getData(){
        return data;
    }

    void setData(T data) {
        DoubleNode::data = data;
    }

    DoubleNode *getNext() const {
        return next;
    }

    DoubleNode *getPrevious() const {
        return previous;
    }

    void setNext(DoubleNode *next) {
        DoubleNode::next = next;
    }

    void setPrevious(DoubleNode *previous) {
        DoubleNode::previous = previous;
    }

    std::string getNextasString() const {
        std::ostringstream oss;
        oss << next;
        std::string get_next = oss.str();
        return get_next;
    }

    std::string getPreviousasString() const {
        std::ostringstream oss;
        oss << previous;
        std::string get_next = oss.str();
        return get_next;
    }

    friend std::ostream &operator<<(std::ostream &os, const DoubleNode &doubleNode) {
        os <<
            "\nNext Pointer: " << doubleNode.getNextasString()
            << "\nPrevious Pointer: " << doubleNode.getPreviousasString()
            <<"\nData: " << doubleNode.getData();
        return os;
    }
};


#endif //SIMPLESTUDENTRECORDSYSTEM_DOUBLENODE_H
