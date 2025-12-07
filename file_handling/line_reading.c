#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int main() {
    FILE *source = fopen("Source.txt", "rb");
    if (!source) {
        perror("File not present");
        return 1;
    }

    int ch;
    while ((ch = fgetc(source)) != EOF) {
        printf("ch=0x%02X ascii=%d\n", ch, ch);
        if (ch == 13)   // '\r'
            break;
    }

    char *line = NULL;
    size_t size = 0;

    ssize_t len = getline(&line, &size, source);  // dynamically allocates/resizes
    if (len != -1)
        printf("Read: %s\n", line);
    else
        printf("No line found or error\n");

    free(line);
    fclose(source);
    return 0;
}
