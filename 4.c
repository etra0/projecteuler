#include <stdio.h>
#include <string.h>
#define MIN_VALUE 100
#define MAX_VALUE 1000

typedef enum {FALSE, TRUE} bool;

bool verify_palindromic(char *text) {
	int t_length = strlen(text);
	int i;
	for (i = 0; i < (t_length)/2; i++) {
		if (text[i] != text[(t_length - 1) - i])
			return FALSE;
	}
	return TRUE;
}

int main()
{
	char buffer[100];
	int max = 0;
	int i, j;
	for (i = MIN_VALUE; i < MAX_VALUE; i++) {
		for (j = MIN_VALUE; j < MAX_VALUE; j++) {
			/* sprintf is used to write the number in the buffer as string */
			sprintf(buffer, "%d", i*j);
			if (verify_palindromic(buffer) && i*j > max)
				max = i*j;
		}
	}
	printf("%d\n", max);
}