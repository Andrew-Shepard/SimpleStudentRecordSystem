//
// Created by andre on 10/12/2021.
//

#ifndef SIMPLESTUDENTRECORDSYSTEM_STUDENT_H
#define SIMPLESTUDENTRECORDSYSTEM_STUDENT_H


#include <cstdint>

class Student {
    private:
        uint32_t total_credit_hours;
        uint32_t number_of_credit_hours;
        uint32_t uid;
        double gpa;
        //Single linked list of course name courses
    public:
        void addCourse();
        void deleteCourse();

        void setTotal_credit_hours(uint32_t total_credit_hours);
        void setNumber_of_credit_hours(uint32_t number_of_credit_hours);
        void setUid(uint32_t uid);
        void setGpa(double gpa);

        uint32_t getTotal_credit_hours();
        uint32_t getNumber_of_credit_hours();
        uint32_t getUid();
        double getGpa();
};


#endif //SIMPLESTUDENTRECORDSYSTEM_STUDENT_H
