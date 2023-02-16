#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void str2num();
void num2str();

void main() {
    char s[10], s1[256], s2[256];
    int len;

    strcpy(s, "ABC");
    printf("s=%s\n", s);

    strcat(s,"DEF");
    // strcpy(s,"DEF");
    printf("s=%s\n",s);

    len=strlen(s);
    printf("len: %d\n",len);

    printf("s1 = ");
    scanf("%s",s1);
    printf("s2 = ");
    scanf("%s",s2);
    if (strcmp(s1, s2) == 0) {
        printf("s1==s2\n");
    } else {
        printf("s1 != s2\n");
    }

    str2num();
    num2str();
}

void str2num() {
    char s1[] = "1000";
    char s2[] = "12.345";
    int a;
    double b;

    a = atoi(s1);
    b = atof(s2);
    printf("a=%d, b=%f\n", a, b);
}

void num2str() {
    char s1[256], s2[256];
    int a=100, b=200;
    sprintf(s1,"%d",a);
    sprintf(s2,"b = %d",b);
    puts(s1);
    puts(s2);
}