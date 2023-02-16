#include <stdio.h>
#include <stdlib.h>

#define SIZE 256

void main() {
    FILE *file;
    char line[SIZE];
    int c;
    
    file = fopen("./files/sample.txt", "w");
    if (file == NULL) {
        printf("no file\n");
        exit(1);
    }

    // fprintf(file, "Helloe World.\r\n");
    // fprintf(file, "ABCDEF\r\n");
    fprintf(file, "Helloe World.\n");
    fprintf(file, "ABCDEF\n");
    fclose(file);

    line[0] = '\0';
    file = fopen("./files/sample.txt", "r");
    if (file == NULL) {
        printf("no file\n");
        exit(1);
    }
    while (fgets(line, SIZE, file) != NULL) {
        printf("%s", line);
    }
    fclose(file);

    file = fopen("./files/sample.txt", "r");
    if (file == NULL ) {
        printf("no file\n");
        exit(1);
    }
    while ((c=fgetc(file)) != EOF) {
        printf("%c", (char)c);
    }
    fclose(file);
}