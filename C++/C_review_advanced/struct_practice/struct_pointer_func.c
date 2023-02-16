#include <stdio.h>

typedef struct {
    int a;
    double d;
}num_data;

void dealData1(num_data);
void dealData2(num_data*);

void main() {
    num_data n1 = {1, 1.2f}, n2 = {1, 1.2f};
    
    printf("n1 address: 0x%p, n2 address: 0x%p\n", &n1, &n2);
    dealData1(n1);
    dealData2(&n2);
    printf("n1.a = %d, n2.d = %f\n", n1.a, n1.d);
    printf("n2.a = %d, n2.d = %f\n", n2.a, n2.d);
}

void dealData1 (num_data data) {
    printf("a = %d, f = %f\n", data.a, data.d);
    printf("dealData1 - data address: 0x%p\n", &data);
    data.a = 2;
    data.d = 2.4;
}

void dealData2 (num_data* pData) {
    printf("a = %d, f = %f\n", pData->a, pData->d);
    printf("dealData2 - data address: 0x%p\n", pData);
    pData->a = 2;
    pData->d = 2.4;
}