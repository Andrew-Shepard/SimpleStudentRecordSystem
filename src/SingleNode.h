//
// Created by andre on 10/13/2021.
//

#ifndef SIMPLESTUDENTRECORDSYSTEM_SINGLENODE_H
#define SIMPLESTUDENTRECORDSYSTEM_SINGLENODE_H

#include <sstream>

template<typename T>
class SingleNode {
protected:
    T data;
    SingleNode *next = nullptr;
public:
    SingleNode() {

    }

    SingleNode(T data) {
        this->data = data;
    }

    SingleNode(T data, SingleNode *next) {
        this->data = data;
        this->next = next;
    }

    T getData() const {
        return data;
    }

    void setData(T data) {
        SingleNode::data = data;
    }

    SingleNode *getNext() const {
        return next;
    }

    std::string getNextasString() const {
        std::ostringstream oss;
        oss  << next;
        std::string get_next = oss.str();
        return get_next;
    }

    void setNext(SingleNode *next) {
        SingleNode::next = next;
    }
    friend std::ostream &operator<<(std::ostream &os, const SingleNode &singleNode) {
        std::string print_statement = "";
        print_statement += "\nData: " + singleNode.getData()
                           + "\nNext Pointer: " + singleNode.getNextasString();
        os << print_statement;
        return os;
    }
};


#endif //SIMPLESTUDENTRECORDSYSTEM_SINGLENODE_H
