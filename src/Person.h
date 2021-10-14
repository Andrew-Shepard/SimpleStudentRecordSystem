//
// Created by andre on 10/12/2021.
//

#ifndef SIMPLESTUDENTRECORDSYSTEM_PERSON_H
#define SIMPLESTUDENTRECORDSYSTEM_PERSON_H

#include<string>

class Person {
    protected:
        std::string name;
        uint8_t age = 0;
    public:
        Person(){}
        Person(std::string name, uint8_t age){
            this->name = name;
            this->age = age;
        }
        void setName(std::string name);
        void setAge(uint8_t age);
        std::string getName();
        uint8_t getAge();
};


#endif //SIMPLESTUDENTRECORDSYSTEM_PERSON_H
