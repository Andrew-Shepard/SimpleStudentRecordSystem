//
// Created by andre on 10/12/2021.
//

#ifndef SIMPLESTUDENTRECORDSYSTEM_RECORDS_H
#define SIMPLESTUDENTRECORDSYSTEM_RECORDS_H


#include <cstdint>
#include <iostream>

using namespace std;
class Records {
    private:
        uint32_t number_of_students = 0;
        double average_GPA = 0;
        //Double linked list of students named students
        void updateAverage_gpa(double student_average_GPA);
        //friend keyword allows for the class to access the private variables
    public:
        Records(){}
        Records(uint32_t number_of_students, double average_GPA){
            this->number_of_students = number_of_students;
            this->average_GPA = average_GPA;
        }
        friend ostream& operator<<(ostream& os, const Records& records);
        void addStudent(double student_average_GPA);
        void removeStudent(double student_average_GPA);

        void setNumber_of_students(uint32_t number_of_students);
        void setAverage_GPA(double average_GPA);
        double getAverage_GPA();
        uint32_t getNumber_of_students();
        ostream& operator<<(Records records); //https://docs.microsoft.com/en-us/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=msvc-160
};


#endif //SIMPLESTUDENTRECORDSYSTEM_RECORDS_H
