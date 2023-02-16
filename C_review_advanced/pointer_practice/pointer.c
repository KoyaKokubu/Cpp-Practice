#include <stdio.h>

void pointer();
void show(int,int,int);
void swap(int*, int*);

void main() {
    int a = 100, a2 = 200;
    double b = 123.4;
    float c = 123.4f;
    char d = 'a';

    printf("a: %d, byte: %ldbytes, address: 0x%p\n", a, sizeof(int), &a);
    printf("b: %f, byte: %ldbytes, address: 0x%p\n", b, sizeof(double), &b);
    printf("c: %f, byte: %ldbytes, address: 0x%p\n", c, sizeof(float), &c);
    printf("d: %c, byte: %ldbytes, address: 0x%p\n", d, sizeof(char), &d);
    pointer();
    printf("a = %d, a2 = %d\n", a, a2);
    swap(&a, &a2);
    printf("a = %d, a2 = %d\n", a, a2);
}

void pointer() {
    int a = 100;
    int b = 200;
    // int *p = NULL;
    int* p = NULL;
    
    // // we cannot input values to *p before giving an address
    // *p = 1;

    p = &a;
    show(a,b,*p);

    *p = 300;
    show(a,b,*p);

    p = &b;
    show(a,b,*p);

    *p = 400;
    show(a,b,*p);
}

void show(int n1, int n2, int n3){
    printf("a = %d, b = %d, *P = %d\n", n1, n2, n3);
}

// we can reflect the changes (of values) without returning the results when we utilize pointer in the function.
// void swap(int* num1, int* num2) {
void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}