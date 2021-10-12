//
// Created by andre on 10/12/2021.
//

#ifndef SIMPLESTUDENTRECORDSYSTEM_RECORDMANAGER_H
#define SIMPLESTUDENTRECORDSYSTEM_RECORDMANAGER_H

#include <string>
#include <rpcndr.h>

using namespace std;

class RecordManager {
    private:
        string STUDENT_CSV_PATH = "default.csv";
        string COURSES_CSV_PATH = "coursesDefault.csv";
        //Double linked list of students
        //Single Linked List of courses (Contains uid for student)

        boolean isCSV(string path);
        void load();
        void loadStudent();
        void loadCourses();
    public:
        void displayMenu();;
        void addStudent();
        void deleteStudent();
        void deleteCourse();

};


#endif //SIMPLESTUDENTRECORDSYSTEM_RECORDMANAGER_H
