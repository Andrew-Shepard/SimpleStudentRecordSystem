//
// Created by andre on 10/12/2021.
//


#include "RecordManager.h"

DoubleLinkedList<Student> list_of_students;
SingleLinkedList<Course> list_of_courses;
Records records;

bool RecordManager::isCSV(string path) {
    //if the path ends in .csv return true (1) else false (0)
    if (path.substr(path.length() - 4, path.length()) == ".csv") {
        return true;
    }
    return false;
}

void RecordManager::load() {
    loadStudent();
    //loadCourses
}

void RecordManager::loadStudent() {
    //using the text in default.csv
    ifstream course_file;
    std::string delimiter = ",";
    size_t delimiter_pos = 0;
    course_file.open(STUDENT_CSV_PATH);
    //while there is another line in the csv
    //load the new line
    for( std::string line; getline( course_file, line ); )
    {
        string line_contents[6] = {}; //6 attributes in a Student
        for(int i = 0; i<6; i++){
            //split the line by commas into an array of strings
            if((delimiter_pos = line.find(delimiter)) != std::string::npos){
                //find returns the location of the delimiter if it exists or returns npos
                line_contents[i] = line.substr(0,delimiter_pos);
                line.erase(0,delimiter_pos+1);
            } else { //end of line case where , is not the delimiter
                line_contents[i] = line.substr(0,line.length());
            }
        }
        //create a new student object
        /** set the values of the student object to the corresponding elements
        *  in the string array
        */
        Student new_student(0,line_contents[1],stoi(line_contents[2]),stoi(line_contents[3]),
            stoi(line_contents[4]), stod(line_contents[5]));
        addStudent(new_student);
    }
}

void RecordManager::loadCourses() {
    //using the text in defaultCourses.csv
    ifstream course_file;
    course_file.open(COURSES_CSV_PATH);
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

void RecordManager::displayMenu() {
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
            "Enter your selection:" << endl;
    takeMenuInput();
}

void RecordManager::takeMenuInput() {
    uint32_t input_int = 0;
    double input_double = 0;
    std::string input_string = "";
    Student search_student(0,"",0,0,0,0);
    Course search_course("", "", 0, 0);
    cin >> input_int;
    //switch(the input_int)
    switch (input_int) {
        //case 1: print records
        case 1:
            cout << records << endl;
            break;
        case 2://case 2: print the record for a student
            cout << "Enter the UID:" << endl;
            cin >> input_int;
            search_student.setUid(input_int);
            cout << list_of_students.getData(search_student) << endl;
            break;
        case 3://case 3: add a student
            cout << "Enter the UID:" << endl;
            cin >> input_int;
            search_student.setUid(input_int);
            cout << "Enter the Total Credit Hours:" << endl;
            cin >> input_int;
            search_student.setTotal_credit_hours(input_int);
            cout << "Enter the number of courses:" << endl;
            cin >> input_int;
            search_student.setNumber_of_courses(input_int);
            cout << "Enter the GPA:" << endl;
            cin >> input_double;
            search_student.setGpa(input_double);
            cout << "Enter the age:" << endl;
            cin >> input_int;
            search_student.setAge(input_int);
            cout << "Enter the Name:" << endl;
            cin >> input_string;
            search_student.setName(input_string);
            addStudent(search_student);
            break;
        case 4://case 4: delete a student
            cout << "Enter the UID";
            cin >> input_int;
            //equality is determined by the UID
            search_student.setUid(input_int);
            deleteStudent(search_student);
            break;
        case 5: //case 5: add a course to a student
            cout << "Enter the UID:" << endl;
            cin >> input_int;
            //equality is determined by the UID
            search_student.setUid(input_int);
            cout << "Enter the Course code:" << endl;
            cin >> input_string;
            search_course.setCode(input_string);
            addCourse(search_student,search_course);
            break;
        case 6://case 6: delete a course from a student
            cout << "Enter the UID:" << endl;
            cin >> input_int;
            //equality is determined by the UID
            search_student.setUid(input_int);
            cout << "Enter the Course code:" << endl;
            cin >> input_string;
            search_course.setCode(input_string);
            deleteCourse(search_student,search_course);
            break;
    }
}

void RecordManager::addStudent(Student student) {
    list_of_students.add(student);
    records.addStudent(student.getGpa());
}

void RecordManager::deleteStudent(Student student) {
    list_of_students.remove(student);
    records.removeStudent(student.getGpa());
}
void RecordManager::addCourse(Student student, Course course) {
    list_of_students.getData(student)
            .addCourse(list_of_courses.getData(course));
}

void RecordManager::deleteCourse(Student student, Course course) {
    list_of_students.getData(student)
            .deleteCourse(list_of_courses.getData(course));
}

string RecordManager::getSTUDENT_CSV_PATH() { return STUDENT_CSV_PATH; }

string RecordManager::getCOURSES_CSV_PATH() { return COURSES_CSV_PATH; }

void RecordManager::setSTUDENT_CSV_PATH(string STUDENT_CSV_PATH) {
    this->STUDENT_CSV_PATH = STUDENT_CSV_PATH;
}

void RecordManager::setCOURSES_CSV_PATH(string COURSES_CSV_PATH) {
    this->COURSES_CSV_PATH = COURSES_CSV_PATH;
}