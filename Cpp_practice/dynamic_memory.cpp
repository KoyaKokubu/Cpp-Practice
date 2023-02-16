#include <iostream>

using namespace std;

int main() {
    int *p = 0, *parray = NULL;
    int i;

    p = new int();
    *p = 123;
    cout << *p << endl;
    delete p;

    parray = new int[10];
    for (i=0; i<10; i++) {
        parray[i] = i;
        cout << parray[i] << endl;
    }
    delete [] parray;

    return 0;
}