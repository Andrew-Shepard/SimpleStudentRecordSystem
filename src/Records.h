//
// Created by andre on 10/12/2021.
//

#ifndef SIMPLESTUDENTRECORDSYSTEM_RECORDS_H
#define SIMPLESTUDENTRECORDSYSTEM_RECORDS_H


#include <cstdint>

class Records {
    private:
        uint32_t number_of_students;
        double average_GPA;
        //Double linked list of students named students
    public:
        void setNumber_of_students(uint32_t number_of_students);
        void setAverage_GPA(double average_GPA);
        double getAverage_GPA();
        uint32_t getNumber_of_students();
};


#endif //SIMPLESTUDENTRECORDSYSTEM_RECORDS_H
