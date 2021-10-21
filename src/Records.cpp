//
// Created by andre on 10/12/2021.
//

#include "Records.h"
#include <iostream>
void Records::updateAverage_gpa(double student_average_GPA){
    //This function assumes that number_of_students is changed before it is run
    average_GPA = (student_average_GPA+(number_of_students-1)*average_GPA)/number_of_students;
}
void Records::addStudent(double student_average_GPA){
    //Increment number of students then update average gpa
    number_of_students++;
    updateAverage_gpa(student_average_GPA);
}
void Records::removeStudent(double student_average_GPA){
    //Decrement number of students then update average gpa
    number_of_students--;
    updateAverage_gpa((-1*student_average_GPA));
}
ostream& operator<<(ostream& os, const Records& records){
    os << "Numbers of students: " << records.number_of_students << "\nAverage GPA: "
       << records.average_GPA << "\nList of Students in Records object: ";
    return os;
}
//Users ideally wouldn't be able to access any setter function
void Records::setNumber_of_students(uint32_t number_of_students){
    this->number_of_students = number_of_students;
}
void Records::setAverage_GPA(double average_GPA){this->average_GPA = average_GPA;}
void Records::setList_of_students(DoubleLinkedList<Student> list_of_students){this->list_of_students = list_of_students;}

double Records::getAverage_GPA(){return average_GPA;}
uint32_t Records::getNumber_of_students(){return number_of_students;}
DoubleLinkedList<Student> Records::getList_of_students(){
    return list_of_students;}
