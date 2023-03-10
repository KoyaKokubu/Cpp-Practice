#ifndef _SAMPLE_H_
#define _SAMPLE_H_

#include <iostream>
#include "IInf1.h"
#include "iinf2.h"

using namespace std;

class CSample : public IInf1, public IInf2 {
    public:
        void func1() {cout << "func1" << endl;}
        void func2() {cout << "func2" << endl;}
        void func3() {cout << "func3" << endl;}
        void func4() {cout << "func4" << endl;}
        
        void foo(IInf1* p) {
            p->func1();
            p->func2();
            // p->func3();
            // p->func4();
        }

        void bar(IInf2* p) {
            // p->func1();
            // p->func2();
            p->func3();
            p->func4();
        }
};

#endif // _SAMPLE_H_