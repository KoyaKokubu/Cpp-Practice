#ifndef _A_H_
#define _A_H_

class B;

class A {
    private:
        B* m_pB;
    public:
        A();
        void foo();
        void bar();
};

#endif // A_H_