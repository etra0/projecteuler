#include <stdio.h>
#define LIMIT 1000

int main()
{
	int i = 1;
	int sum = 0;
	while (i < LIMIT) {
		if (!(i%3) || !(i%5))
			sum += i;
		i++;
	}
	printf("%d\n", sum);
	return 0;
}