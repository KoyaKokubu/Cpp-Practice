#include <stdio.h>

void pointer_array();

#define SIZE 5

void main() {
    int ar1[SIZE];
    char ar2[SIZE];
    int i;
    int* p1=NULL;
    char* p2=NULL;

    for (i=0; i<SIZE; i++){
        ar1[i]=i;
        ar2[i]='A'+i;
    }

    p1 = &ar1[0];
    p2 = &ar2[0];

    for(i=0; i<SIZE; i++){
        printf("ar1[%d]=%d, *(p1+%d)=%d /", i, ar1[i], i, *(p1+i));
        printf("ar2[%d]=%c, *(p2+%d)=%c\n", i, ar2[i], i, *(p2+i));
    }

    pointer_array();
}

void pointer_array() {
    double d[]={0.2, 0.4, 0.6};
    double *p1=NULL, *p2=NULL;
    int i;

    printf("%ld\n", sizeof(d)/sizeof(d[0]));

    p1=d;
    p2=d;

    for(i=0; i<3; i++){
        printf("%f %f %f\n", *(d+i), p1[i], *p2);
        p2++;
    }
}