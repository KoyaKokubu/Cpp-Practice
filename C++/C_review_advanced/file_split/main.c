#include <stdio.h>
#include "studentDatabase.h"
#include "dataOutput.h"

void main() {
    int i;
    char names[][LENGTH] = {"tom", "jasmine"};
    int ids[] = {1,2};
    initDatabase();
    for (i=0; i<2; i++) {
        add(ids[i], names[i]);
        printf("register: %d, %s\n", ids[i], names[i]);
        showError();
    }
    for (i=0; i<2; i++) {
        showStudentData(get(i+1));
    }
}