//
// Created by andre on 10/12/2021.
//

#include "Student.h"

uint32_t total_credit_hours = 0;
uint32_t number_of_credit_hours = 0;
uint32_t uid = 0;
double gpa = 0;
//Single Linked List of course objects

void Student::addCourse(){
    /**
     *
     */
}
void Student::deleteCourse(){
    /**
     *
     */
}
void Student::setTotal_credit_hours(uint32_t total_credit_hours){this->total_credit_hours = total_credit_hours;}
void Student::setNumber_of_credit_hours(uint32_t number_of_credit_hours){this->number_of_credit_hours = number_of_credit_hours;}
void Student::setUid(uint32_t uid){this->uid = uid;}
void Student::setGpa(double gpa){this->gpa = gpa;}

uint32_t Student::getTotal_credit_hours(){return total_credit_hours;}
uint32_t Student::getNumber_of_credit_hours(){return number_of_credit_hours;}
uint32_t Student::getUid(){return uid;}
double Student::getGpa(){return gpa;}