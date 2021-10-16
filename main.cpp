#include <iostream>
#include "src/RecordManager.h"
#include "src/SingleLinkedList.h"
#include "src/DoubleLinkedList.h"

int main() {
    RecordManager recordManager;
    uint32_t continue_ = 1;

    while (continue_ == 1) {
        recordManager.displayMenu();
        cout << "Continue? Type 1 " << endl;
        cin >> continue_;
    }

    return 0;
}
