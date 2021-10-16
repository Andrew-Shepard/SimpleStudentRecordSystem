#include <iostream>
#include "src/RecordManager.h"
#include "src/SingleLinkedList.h"
#include "src/DoubleLinkedList.h"

int main() {
    RecordManager recordManager;
    //Student student(1,2,3,4.0,12,"buh");
    //Person person("name lol!",16);
    //SingleLinkedList<int16_t> singleLinkedList;
    DoubleLinkedList<int16_t> doubleLinkedList;
    doubleLinkedList.add(16);
    doubleLinkedList.add(4);
    doubleLinkedList.add(2);
    doubleLinkedList.add(2);
    //doubleLinkedList.add(2);

    cout << doubleLinkedList;
    //recordManager.displayMenu();

    return 0;
}
