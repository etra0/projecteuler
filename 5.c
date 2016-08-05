#include <stdio.h>
#define FALSE 0
#define TRUE 1

int verify(int n)
{
	int i;
	for (i = 1; i < 21; i++) {
		if (n%i)
			return FALSE;
	}
	return TRUE;
}

int main()
{
	int i = 1;
	while (!verify(i))
		i++;
	printf("%d\n", i);
	return 0;
}