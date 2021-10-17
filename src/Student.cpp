//
// Created by andre on 10/12/2021.
//

#include "Student.h"

void Student::addCourse(Course course){
    list_of_courses.add(course);
    this->number_of_courses += 1;
    cout << list_of_courses << endl;
}
void Student::deleteCourse(Course course){
    list_of_courses.remove(course);
    this->number_of_courses -= 1;
}

ostream& operator<<(ostream& os, const Student& student){
    //8bits print as ascii characters sometimes lol! tostring.
    os << "Name: "<< student.name << "\nAge: " << to_string(student.age)
        << "\nTotal credit hours: " << student.total_credit_hours
            << "\nNumber of Courses: "<< student.number_of_courses
                << "\nUID: "<< student.uid << "\nGPA :"<< student.gpa;
    return os;
}

void Student::setTotal_credit_hours(uint32_t total_credit_hours){this->total_credit_hours = total_credit_hours;}
void Student::setNumber_of_courses(uint32_t number_of_courses){this->number_of_courses = number_of_courses;}
void Student::setUid(uint32_t uid){this->uid = uid;}
void Student::setGpa(double gpa){this->gpa = gpa;}

uint32_t Student::getTotal_credit_hours(){return total_credit_hours;}
uint32_t Student::getNumber_of_courses(){return number_of_courses;}
uint32_t Student::getUid(){return uid;}
double Student::getGpa(){return gpa;}