#include <iostream>
#include "src/RecordManager.h"
#include "src/SingleLinkedList.h"

int main() {
    RecordManager recordManager;
    //Student student(1,2,3,4.0,12,"buh");
    //Person person("name lol!",16);
    SingleLinkedList<int16_t> singleLinkedList;
    singleLinkedList.add(16);
    singleLinkedList.add(4);
    singleLinkedList.add(2);
    cout << singleLinkedList;
    //recordManager.displayMenu();

    return 0;
}
