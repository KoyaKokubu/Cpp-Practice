#ifndef _BIRD_H_
#define _BIRD_H_

#include <iostream>
#include <string>

using namespace std;

class CBird {
    public:
        virtual void sing()=0;
        // virtual void sing() {cout << "bird sings" << endl;}
        void fly() {cout << "bird flies" << endl;}
};

#endif // _BIRD_H_