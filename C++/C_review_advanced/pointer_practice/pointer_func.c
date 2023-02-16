#include <stdio.h>

void func1();
void func2();
int max(int, int);
int min(int, int);

void funcp(int (*)(int), int);
int dbl(int);
int hlf(int);

void main() {
    void (*fp)() = func1;
    // int (*cmp)(int,int) = max;
    int (*cmp[2])(int,int);
    int a=1, b=2, i=0;

    fp();
    fp = func2;
    fp();

    cmp[0] = max;
    cmp[1] = min;
    printf("%p\n", cmp);
    printf("%p\n", cmp[0]);
    printf("%p\n", cmp[1]);
    for (i=0; i<2; i++) {
        printf("cmp(%d, %d): %d\n", a, b, cmp[i](a,b));        
    }
    printf("max(%d, %d): %d\n", a, b, cmp[0](a,b));
    printf("min(%d, %d): %d\n", a, b, cmp[1](a,b));

    funcp(dbl,8);
    funcp(hlf,8);
}

void func1() {
    printf("func1\n");
}

void func2() {
    printf("func2\n");
}

int max(int m, int n) {
    if (m>n) {
        return m;
    }
    return n;
}

int min(int m, int n) {
    if (m<n) {
        return m;
    }
    return n;
}

void funcp(int (*f)(int), int n) {
    printf("parameter: %d / result: %d\n", n, f(n));
}

int dbl(int n) {
    return n*2;
}
int hlf(int n) {
    return n/2;
}