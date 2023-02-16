#ifndef _SAMPLE_H_
#define _SAMPLE_H_

class CSample {
    private:
        int m_num;
    public:
        void set(int num);
        int get();
};

class Sample {
    public:
        int a;
    private:
        int b;
    public:
        void func1();
    private:
        void func2();
};

#endif // _SAMPLE_H_