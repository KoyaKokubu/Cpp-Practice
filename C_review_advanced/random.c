#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define PI 3.14

void trig();
void other_math();

void main() {
    int a,b;
    srand((unsigned) time(NULL));
    a = rand()%10+1;
    b = rand()%10+1;
    printf("%d + %d = %d\n", a, b, a+b);
    trig();
    other_math();
}

void trig() {
    int angle;
    double rad;
    printf("enter an angle(0~360): ");
    scanf("%d",&angle);
    rad = PI * (double)angle / 180.0;
    printf("sin(%d)=%f\n", angle, sin(rad));
    printf("cos(%d)=%f\n", angle, cos(rad));
    printf("tan(%d)=%f\n", angle, tan(rad));
}

void other_math() {
    int n = -2;
    double d1 = -2.5, d2 = 4.0;
    printf("abs(%d) : %d\n", n, abs(n));
    printf("fabs(%f) : %f\n", d1, fabs(d1));
    printf("pow(%f, 2) : %f\n", d2, pow(d2,2));
    printf("sqrt(%f) : %f\n", d2, sqrt(d2));
}