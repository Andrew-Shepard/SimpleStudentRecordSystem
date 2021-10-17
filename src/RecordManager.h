//
// Created by andre on 10/12/2021.
//

#ifndef SIMPLESTUDENTRECORDSYSTEM_RECORDMANAGER_H
#define SIMPLESTUDENTRECORDSYSTEM_RECORDMANAGER_H

#include <string>
#include <iostream>
#include <fstream>
#include "Student.h"
#include "Course.h"
#include "RecordManager.h"
#include "DoubleLinkedList.h"
#include "SingleLinkedList.h"
#include "Records.h"

using namespace std;

class RecordManager {
    private:
        string STUDENT_CSV_PATH = "../input/default.csv";
        string COURSES_CSV_PATH = "../input/coursesDefault.csv";
        //Double linked list of students
        //Single Linked List of courses (Contains uid for student)

        bool isCSV(string path);

        void loadStudent();
        void loadCourses();
        void takeMenuInput();
        void addStudent(Student student);
        void deleteStudent(Student student);
        void addCourse(Student student, Course course);
        void deleteCourse(Student student, Course course);
    public:
        void displayMenu();
        void load();

        string getSTUDENT_CSV_PATH();
        string getCOURSES_CSV_PATH();
        void setSTUDENT_CSV_PATH(string STUDENT_CSV_PATH);
        void setCOURSES_CSV_PATH(string COURSES_CSV_PATH);
        //get doublelist
        //get singlelist
        //set doublelist
        //set singlelist


};


#endif //SIMPLESTUDENTRECORDSYSTEM_RECORDMANAGER_H
