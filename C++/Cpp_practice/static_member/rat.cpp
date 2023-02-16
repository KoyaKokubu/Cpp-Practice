#include "rat.h"
#include <iostream>

using namespace std;

int CRat::m_count = 0;

CRat::CRat() : m_id(0) {
    m_id = m_count;
    m_count++;
}

CRat::~CRat() {
    cout << "mouse: " << m_id << "delete" << endl;
    m_count--;
}

void CRat::showNum(){
    cout << "current number: " << m_count << endl;
}

void CRat::squeak() {
    cout << m_id << " : " << "chuuchuu" << endl;
}