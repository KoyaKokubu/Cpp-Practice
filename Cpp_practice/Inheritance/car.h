#ifndef _CAR_H_
#define _CAR_H_

class CCar {
    private:
        int m_fuel;
        int m_migration;
    public:
        CCar();
        virtual ~CCar();
        void move();
        void supply(int fuel);
};

#endif // _CAR_H_