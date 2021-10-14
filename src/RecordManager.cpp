//
// Created by andre on 10/12/2021.
//

#include <iostream>
#include "RecordManager.h"

string STUDENT_CSV_PATH = "default.csv";
string COURSES_CSV_PATH = "coursesDefault.csv";
//Double linked list of students
//Single Linked List of courses (Contains uid for student)

bool RecordManager::isCSV(string path){
    //if the path ends in .csv return true (1) else false (0)
    if (path.substr(path.length()-4,path.length()) == ".csv"){
        return true;
    }
    return false;
}
void RecordManager::load(){
    //loadStudent
    //loadCourses
}
void RecordManager::loadStudent(){
    //using the text in default.csv
    //while there is another line in the csv
        //load the new line
        //split the line by commas into an array of strings
        //create a new student object
        /** set the values of the student object to the corresponding elements
         *  in the string array
         */
}
void RecordManager::loadCourses(){
    //using the text in defaultCourses.csv
    //while there is another line in the csv
        //load the new line
        //split the line by commas into an array of string
        //use the uid to look up the corresponding student
        //create a course object
        /** set the values of the course object to the corresponding elements
         *  in the string array
         */
        //add the course to student's course list
}

void RecordManager::displayMenu(){
    //print the table
    cout << "\tWelcome to FLPoly Simple Student Record System.\n"
            "\t-----------------------------------------------\n"
            "Please select on one of the following:\n"
            "[1] Print all records\n"
            "[2] Print the record for a single student\n"
            "[3] Add a student\n"
            "[4] Delete a student\n"
            "[5] Add a course to a student\n"
            "[6] Delete a course from a student\n"
            "\n"
            "Enter your selection: ";
    takeMenuInput();
}
void RecordManager::takeMenuInput() {
    uint8_t input = 0;
    cin >> input;
    //switch(the input)
    switch(input) {
        //case 1: print records
        case 1:
            break;
        //case 2: print the record for a student
        case 2:
            break;
        //case 3: add a student
        case 3:
            //addStudent();
            break;
        //case 4: delete a student
        case 4:
            //deleteStudent()
            break;
        //case 5: add a course to a student
        case 5:
            //addStudent()
            break;
        //case 6: delete a course from a student
        case 6:
            //deleteCourse()
            break;
    }
}

void RecordManager::addStudent(Student student){}
void RecordManager::deleteStudent(Student student){}
void RecordManager::deleteCourse(Student student,Course course){}

string RecordManager::getSTUDENT_CSV_PATH(){return STUDENT_CSV_PATH;}
string RecordManager::getCOURSES_CSV_PATH(){return COURSES_CSV_PATH;}
void RecordManager::setSTUDENT_CSV_PATH(string STUDENT_CSV_PATH){
    this->STUDENT_CSV_PATH = STUDENT_CSV_PATH;
}
void RecordManager::setCOURSES_CSV_PATH(string COURSES_CSV_PATH){
    this->COURSES_CSV_PATH = COURSES_CSV_PATH;
}