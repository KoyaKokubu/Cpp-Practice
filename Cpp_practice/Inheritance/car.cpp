#include "car.h"
#include <iostream>

using namespace std;

CCar::CCar() : m_fuel(0), m_migration(0) {
    cout << "create CCar instance" << endl;
}

CCar::~CCar() {
    cout << "destroy CCar instance" << endl;
}

void CCar::move() {
    if (m_fuel >= 0) {
        m_migration++;
        m_fuel--;
    }
    cout << "move" << endl;
    cout << "distance: " << m_migration << endl;
    cout << "fuel: " << m_fuel << endl;
}

void CCar::supply(int fuel) {
    if (fuel > 0) {
        m_fuel += fuel;
    }
    cout << "supply" << endl;
    cout << "fuel: " << m_fuel << endl;
}