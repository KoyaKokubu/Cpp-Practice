#ifndef _AMBULANCE_H_
#define _AMBULANCE_H_

#include "car.h"

class CAmbulance : public CCar {
    private:
        int m_number;
    public:
        CAmbulance();
        virtual ~CAmbulance();
        void savePeople();
};

#endif // _AMBULANCE_H_