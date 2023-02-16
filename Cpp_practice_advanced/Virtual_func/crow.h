#ifndef _CROW_H_
#define _CROW_H_

#include "bird.h"

class CCrow : public CBird {
    public:
        void sing() {cout << "caw caw" << endl;}
        void fly() {cout << "crow flies" << endl;}
};

#endif // _CROW_H_