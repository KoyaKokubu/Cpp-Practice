#include <iostream>
#include "IInf1.h"
#include "IInf2.h"
#include "Sample.h"

void foo(IInf1*);
void bar(IInf2*);

int main() {
    CSample* s = new CSample();
    // foo((IInf1*)s);
    // bar((IInf2*)s);
    s->foo((IInf1*)s);
    cout << endl;
    s->bar((IInf2*)s);
    return 0;
}

// void foo(IInf1* p) {
//     p->func1();
//     p->func2();
//     // p->func3();
//     // p->func4();
// }

// void bar(IInf2* p) {
//     // p->func1();
//     // p->func2();
//     p->func3();
//     p->func4();
// }