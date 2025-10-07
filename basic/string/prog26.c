#include <stdio.h>
#include <string.h>
int main() {
	char s[50] = "c ds coding doing";
	int i = 0, start = 0;
	while (s[i] != '\0') {
		while (s[i] == ' ') i++;
		start = i;
		while (s[i] != ' ' && s[i] != '\0') i++;
		if (s[i-1] == 'g') {
			for (int j = start; j < i; j++)
				printf("%c", s[j]);
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}

