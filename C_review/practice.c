#include <stdio.h>

void main() {
    int a = 6, b = 3, i=0;
    double ave = (a+b)/2.0, d[3];
    int n[] = {5,4,3,2,1};
    double sum=0.0;
    int len=0;

    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d / %d = %d ... %d\n", a, b, a/b, a%b);
    printf("average of %d and %d: %f\n", a, b, ave);

    scanf("%d", &a);
    if (a>0) {
        printf("positive number\n");
    } else if (a==0) {
        printf("the number is 0\n");
    }
    else {
        printf("negative number\n");
    }
    if (a>0) printf("positive number\n");
    else if (a==0) printf("the number is 0\n");
    else printf("negative number\n");

    printf("%d\n", a);
    switch(a%2) {
        case 0:
            printf("even\n");
            break;
        default:
            printf("odd\n");
            break;
    }

    for (i=0; i<5; i++){
        printf("%d", i);
    }
    printf("\n");
    printf("i = %d\n", i);
    do {
        printf("%d", i);
        i++;
    }while(i<0);
    printf("\n");

    d[0] = 1.2;
    d[1] = 3.7;
    d[2] = 4.1;
    for (i=0; i<3; i++){
        printf("%f ,", d[i]);
        sum+=d[i];
    }
    printf("\n");
    len = sizeof d / sizeof d[0];
    ave = sum / len;
    printf("sizeof d: %ld\n", (sizeof d));
    printf("sizeof d[0]: %ld\n", (sizeof d[0]));
    printf("sum = %f\n",sum);
    printf("ave = %f\n",ave);

    for (i=0; i<5; i++) {
        printf("n[%d]=%d", i, n[i]);
    }
    printf("\n");
}