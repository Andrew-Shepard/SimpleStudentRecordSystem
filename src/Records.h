//
// Created by andre on 10/12/2021.
//

#ifndef SIMPLESTUDENTRECORDSYSTEM_RECORDS_H
#define SIMPLESTUDENTRECORDSYSTEM_RECORDS_H


#include <cstdint>
#include <iostream>
#include "DoubleLinkedList.h"
#include "Student.h"

using namespace std;

class Records {
private:
    uint32_t number_of_students = 0;
    double average_GPA = 0;
    DoubleLinkedList<Student> list_of_students;
    //Double linked list of students named students
    void updateAverage_gpa(double student_average_GPA);
    //friend keyword allows for the class to access the private variables
public:
    friend ostream &operator<<(ostream &os, const Records &records);

    Records() {}

    Records(uint32_t number_of_students, double average_GPA) {
        this->number_of_students = number_of_students;
        this->average_GPA = average_GPA;
    }

    void addStudent(double student_average_GPA);

    void removeStudent(double student_average_GPA);

    void setList_of_students(DoubleLinkedList<Student> list_of_students);

    void setNumber_of_students(uint32_t number_of_students);

    void setAverage_GPA(double average_GPA);

    double getAverage_GPA();

    DoubleLinkedList<Student> getList_of_students();

    uint32_t getNumber_of_students();
};


#endif //SIMPLESTUDENTRECORDSYSTEM_RECORDS_H
