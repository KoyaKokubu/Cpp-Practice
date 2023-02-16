#include <stdio.h>
#include <string.h>
#include <malloc.h>

int createMemory(char**, int);
void freeMemory(char**);

void main() {
    char *s[3] = {"taro", "hanako", "tom"};
    char **pps = NULL;
    int i;
    char* s2 = NULL;

    for (i=0; i<3; i++) {
        printf("%s\n", s[i]);
    }

    pps = s;
    for (i=0; i<3; i++) {
        printf("%s\n", *pps);
        pps++;
    }

    createMemory(&s2, 255);
    strcpy(s2, "HelloWorld\n");
    printf("%s",s2);
    freeMemory(&s2);
}

int createMemory (char** mem, int size) {
    if (*mem == NULL) {
        *mem = (char*)malloc(sizeof(char)*size);

        if (*mem == 0) {
            return -1;
        }
        return 0;
    }
    return -1;
}

void freeMemory (char** mem) {
    if (mem != 0) {
        free(*mem);
    }
}