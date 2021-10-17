cmake_minimum_required(VERSION 3.20)
project(SimpleStudentRecordSystem)

set(CMAKE_CXX_STANDARD 14)

add_executable(SimpleStudentRecordSystem src/main.cpp src/Person.cpp src/Person.h
        src/Records.cpp src/Records.h src/Student.cpp
        src/Student.h src/Course.cpp src/Course.h
        src/SingleLinkedList.h src/RecordManager.cpp src/RecordManager.h
        src/SingleNode.h src/DoubleNode.h src/DoubleLinkedList.h)
