//
// Created by andre on 10/12/2021.
//

#include "Course.h"
void Course::setAll(string code, string title, double grade, uint8_t credit_hour){
    this->code = code;
    this->title = title;
    this->grade = grade;
    this->credit_hour = credit_hour;
}
ostream& operator<<(ostream& os, const Course& course){
    os << "Code: " << course.code << "\nTitle: " << course.title
        << "\nGrade: " << course.grade << "\nCredit Hour: " << to_string(course.credit_hour);
    return os;
}
void Course::setCode(string code){
    this->code = code;
}
void Course::setTitle(string title){
    this->title = title;
}
void Course::setGrade(double grade){
    this->grade = grade;
}
void Course::setCredit_hour(uint8_t credit_hour){
    this->credit_hour = credit_hour;
}
