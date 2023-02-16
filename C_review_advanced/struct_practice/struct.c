#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[256];
    int age;
};

typedef struct student student_data;

void main() {
    int i;
    struct student data;
    struct student data0[] = {
        {1,"tom",23},
        {2,"jasmine",23}
    };
    student_data data1[] = {
        {1,"tom",23},
        {2,"jasmine",23}
    };
    
    data.id = 1;
    strcpy(data.name, "ABC");
    data.age = 18;
    
    printf("id: %d, name: %s, age: %d\n", data.id, data.name, data.age);

    for (i=0; i<2; i++) {
        printf("id: %d, name: %s, age: %d\n", data0[i].id, data0[i].name, data0[i].age);
    }
    for (i=0; i<2; i++) {
        printf("id: %d, name: %s, age: %d\n", data1[i].id, data1[i].name, data1[i].age);
    }
}