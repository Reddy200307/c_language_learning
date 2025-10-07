#include <stdio.h>
#include <string.h>

int main() {
    char s[50];
    int i, j, start, end;
    
    printf("enter a string\n");
    scanf("%[^\n]", s);
    int len = strlen(s);

    for(i = len - 1; i >= 0 && s[i] == ' '; i--);
    end = i;

    for(; i >= 0 && s[i] != ' '; i--);
    start = i + 1;

    for(i = start, j = end; i < j; i++, j--) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

    printf("%s\n", s);
    return 0;
}

