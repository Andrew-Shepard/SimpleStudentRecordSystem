//
// Created by andre on 10/12/2021.
//

#ifndef SIMPLESTUDENTRECORDSYSTEM_COURSE_H
#define SIMPLESTUDENTRECORDSYSTEM_COURSE_H


#include <string>
using namespace std;
class Course {
    private:
        std::string code;
        std::string title;
        double grade = 0;
        uint8_t credit_hour = 0;
    public:
        Course(){}
        Course(string code, string title, double grade, uint8_t credit_hour){
            this->code = code;
            this->title = title;
            this->grade = grade;
            this->credit_hour = credit_hour;
        }
        void setAll(string code, string title, double grade, uint8_t credit_hour);
        void setCode(string code);
        void setTitle(string title);
        void setGrade(double grade);
        void setCredit_hour(uint8_t credit_hour);
};


#endif //SIMPLESTUDENTRECORDSYSTEM_COURSE_H
