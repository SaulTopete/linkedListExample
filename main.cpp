#include <iostream>
#include "LinkedList.h"

int main() {
    LinkedList<int> l;

    for (int i = 0; i < 10; i++)
    {
        l.addFront(i);
    }
        std::cout << l;
    return 0;
}
