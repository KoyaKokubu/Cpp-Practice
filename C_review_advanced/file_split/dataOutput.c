#include "dataOutput.h"
#include <stdio.h>

extern int Error;

void showStudentData (student* data) {
    if (data != NULL) {
        printf("id: %d, name: %s\n", data->id, data->name);
    } else {
        printf("no data\n");
    }
}

void showError() {
    switch(Error) {
        case MESSAGE_OK:
        printf("OK!\n");
        break;
        case MESSAGE_ERROR:
        printf("ERROR!\n");
        break;
    }
}