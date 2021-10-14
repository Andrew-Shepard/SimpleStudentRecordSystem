#include <iostream>
#include "src/RecordManager.h"

int main() {
    RecordManager recordManager;
    Student student(1,2,3,4.0,12,"buh");
    Person person("name lol!",16);
    cout << person;
    //recordManager.displayMenu();

    return 0;
}
