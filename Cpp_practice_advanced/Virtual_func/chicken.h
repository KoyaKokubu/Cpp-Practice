#ifndef _CHICKEN_H_
#define _CHICKEN_H_

#include "bird.h"

class CChicken : public CBird {
    public:
        void sing() {cout << "cock-a-doodle-doo" << endl;}
        void fyly() {cout << "chicken cannot fly" << endl;}
};

#endif // _CHICKEN_H_