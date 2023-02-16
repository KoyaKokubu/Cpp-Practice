#include "sample.h"
#include <iostream>

using namespace std;

void CSample::set(int num) {
    m_num = num;
}

int CSample::get() {
    return m_num;
}

void Sample::func1() {
    cout << "func1" << endl;
    a = 1;
    b = 1;
    func2();
}

void Sample::func2() {
    a = 2;
    b = 2;
    cout << "a=" << a << ", " << "b=" << b << endl;
}