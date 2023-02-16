#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

void main() {
    int* p1=(int*)malloc(sizeof(int)*SIZE);
    double *p2=NULL;
    int i;

    // p1 = (int*)malloc(sizeof(int)*SIZE);
    // printf("%f, %p\n", *p2, p2);
    p2 = (double*)malloc(sizeof(double)*SIZE);

    for (i=0; i<SIZE; i++) {
        p1[i] = i;
        p2[i] = i/10.0;
    }
    for (i=0; i<SIZE; i++) {
        printf("p1[%d]=%d, p2[%d]=%f\n", i, p1[i], i, p2[i]);
    }
    free(p1);
    free(p2);
}