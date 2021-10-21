#include <iostream>
#include "RecordManager.h"
#include "SingleLinkedList.h"
#include "DoubleLinkedList.h"

int main() {
    RecordManager recordManager;
    uint32_t continue_ = 1;
    recordManager.load();
    while (continue_ == 1) {
        recordManager.displayMenu();
        cout << "Continue? Type 1 " << endl;
        cin >> continue_;
    }
    return 0;
}
