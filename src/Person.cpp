//
// Created by andre on 10/12/2021.
//

#include "Person.h"

std::string name = "";
uint8_t age = 0;
ostream& operator<<(ostream& os, const Person& person){
    os << "Name: "<< person.name << "\nAge: " << to_string(person.age);
    return os;
}
void Person::setName(std::string name) { this->name = name; }

void Person::setAge(uint8_t age) { this->age = age; }

std::string Person::getName() { return name; }

uint8_t Person::getAge() { return age; }