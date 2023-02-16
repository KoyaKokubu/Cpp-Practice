#ifndef _RAT_H_
#define _RAT_H_

class CRat {
    private:
        int m_id;
        static int m_count;
    public:
        CRat();
        ~CRat();
        static void showNum();
        void squeak();
};

#endif /* _RAT_H_ */