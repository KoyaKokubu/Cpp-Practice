#include "car.h"
#include <iostream>

using namespace std;

void main2();

int main() {
    CCar c;
    c.supply(10);
    c.move();
    c.move();
    main2();
    return 0;
}

void main2() {
    CCar* pC = 0;
    pC = new CCar();
    pC->supply(10);
    pC->move();
    pC->move();
    delete pC;
    cout << "finish deleting instance" << endl;
}