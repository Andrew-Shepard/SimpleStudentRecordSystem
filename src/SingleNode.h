//
// Created by andre on 10/13/2021.
//

#ifndef SIMPLESTUDENTRECORDSYSTEM_SINGLENODE_H
#define SIMPLESTUDENTRECORDSYSTEM_SINGLENODE_H

template<typename T>
class SingleNode {
protected:
    T data;
    SingleNode *next = nullptr;
public:
    SingleNode(){

    }
    SingleNode(T data, SingleNode *next){
        this->data = data;
        this->next = next;
    }

    T getData() const {
        return data;
    }

    void setData(T data){
        this->data = data; //difference from example
    }

    SingleNode *getNext() const {
        return next;
    }

    void setNext(SingleNode *next){
        this->next = next; //difference from example
    }
};


#endif //SIMPLESTUDENTRECORDSYSTEM_SINGLENODE_H
