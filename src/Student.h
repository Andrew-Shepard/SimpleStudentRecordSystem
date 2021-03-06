//
// Created by andre on 10/12/2021.
//

#ifndef SIMPLESTUDENTRECORDSYSTEM_STUDENT_H
#define SIMPLESTUDENTRECORDSYSTEM_STUDENT_H

#include "Person.h"
#include <cstdint>
#include <iostream>
#include "SingleLinkedList.h"
#include "Course.h"
using namespace std;
class Student: public Person{
    private:
        uint32_t total_credit_hours = 0;
        uint32_t number_of_courses = 0;
        uint32_t uid = 0;
        double gpa = 0;
        SingleLinkedList<Course> list_of_courses;
    public:
        friend ostream& operator<<(ostream& os, const Student& records);
        bool operator == (const Student &student) const {return uid == student.uid;}
        bool operator != (const Student &student) const {return !(*this==student);}

        Student(){}
        Student(uint32_t uid, std::string name, uint8_t age, uint32_t total_credit_hours,
            uint32_t number_of_courses, double gpa){
            this->total_credit_hours = total_credit_hours;
            this->number_of_courses = number_of_courses;
            this->uid = uid;
            this->gpa = gpa;
            this->age = age;
            this->name = name;
        }
        void addCourse(Course course);
        void deleteCourse(Course course);

        void setTotal_credit_hours(uint32_t total_credit_hours);
        void setNumber_of_courses(uint32_t number_of_courses);
        void setUid(uint32_t uid);
        void setGpa(double gpa);

        uint32_t getTotal_credit_hours();
        uint32_t getNumber_of_courses();
        uint32_t getUid();
        double getGpa();
        SingleLinkedList<Course> getCourses();
};


#endif //SIMPLESTUDENTRECORDSYSTEM_STUDENT_H
