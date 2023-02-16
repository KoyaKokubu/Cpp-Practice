#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[256];
    int age;
}student_data;

void setData(student_data*, int, char*, int);
void showData(student_data*);

void main() {
    student_data data[2];
    int i;
    int id[] = {1,2};
    char name[][256] = {"tom", "jasmine"};
    int age[] = {23,23};

    for (i=0; i<2; i++) {
        setData(&data[i], id[i], name[i], age[i]);
    }
    for (i=0; i<2; i++) {
        showData(&data[i]);
    }
    return;
}

void setData(student_data* data, int id, char* name, int age) {
    data->id = id;
    strcpy(data->name, name);
    data->age = age;
}

void showData(student_data* data) {
    printf("id: %d, name: %s, age: %d\n", data->id, data->name, data->age);
}