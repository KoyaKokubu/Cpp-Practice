#include "ambulance.h"
#include <iostream>

using namespace std;

CAmbulance::CAmbulance() : m_number(119) {
    cout << "create CAmbulance instance" << endl;
}

CAmbulance::~CAmbulance() {
    cout << "destroy CAmbulance instance" << endl;
}

void CAmbulance::savePeople() {
    cout << "rescue work" << endl << "emergency phone number: " << m_number << endl;
}