//
// Created by andre on 10/12/2021.
//

#include "RecordManager.h"

string STUDENT_CSV_PATH = "default.csv";
string COURSES_CSV_PATH = "coursesDefault.csv";
//Double linked list of students
//Single Linked List of courses (Contains uid for student)

boolean RecordManager::isCSV(string path){
    //if the path ends in .csv return true else false
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
    //takemenuinput()
}
void RecordManager::takeMenuInput() {
    //switch(the input)
    //case 1: print records
    //case 2: print the record for a student
    //case 3: add a student
        //addStudent();
    //case 4: delete a student
        //deleteStudent()
    //case 5: add a course to a student
        //addStudent()
    //case 6: delete a course from a student
        //deleteCourse()
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