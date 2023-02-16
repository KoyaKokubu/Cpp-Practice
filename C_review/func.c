#include <stdio.h>

int GLOBAL = 10;

double avg(double, double);
int max(int, int);
void main2();
void show(int);
void line();
void show_static();

// double avg(double l, double m) {
//     double r = (l+m)/2.0;
//     return r;
// }

void main() {
    double d1,d2,d3;
    double a=1.2, b=3.4, c=2.7;
    d1 = avg(a,b);
    d2 = avg(4.1, 5.7);
    d3 = avg(c, 2.8);
    printf("d1 = %f, d2 = %f, d3 = %f\n", d1,d2,d3);
    main2();
}

void main2() {
    int n1=4, n2=5;
    line();
    show(n1);
    show(n2);
    printf("the bigger number is %d.\n", max(n1,n2));
    line();
    show_static();
    show_static();
}

double avg(double l, double m) {
    double r = (l+m)/2.0;
    return r;
}

void line() {printf("*************************\n");}

void show(int n) {
    printf("number: %d\n", n);
    return;
}

int max(int a, int b) {
    if (a>b) return a;
    return b;
}

void show_static() {
    static int s = 100;
    printf("s=%d\n", s);
    s++;
}