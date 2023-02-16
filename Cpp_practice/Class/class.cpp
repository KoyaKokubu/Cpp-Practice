#include <iostream>
#include "sample.h"

using namespace std;

int main() {
    CSample obj1, obj2;
    int num;

    cout << "enter integer1: " << endl;
    cin >> num;
    obj1.set(num);

    cout << "enter integer2: " << endl;
    cin >> num;
    obj2.set(num);
    
    cout << obj1.get() << endl;
    cout << obj2.get() << endl;

    Sample s;
    s.a = 1;
    // s.b = 2;
    s.func1();
    // s.func2();
    return 0;
}