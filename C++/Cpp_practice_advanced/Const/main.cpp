#include <iostream>
#include <string>
#include "Sample.h"

using namespace std;

int main() {
    CSample s;
    cout << "constant: " << s.m_cst << endl;
    s.setStr("ABC");
    cout << s.getStr() << endl;
    return 0;
}