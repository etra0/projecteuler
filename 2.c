#include <stdio.h>
#define LIMIT 4000000
#define debug stderr

int main()
{
	int f_before = 0;
	int i = 1;
	int sum = 0;
	/* In this case, i and f_before are two terms of the fibonacci sequence, 
	 * so, we have to probe the two terms if they're even numbers.
	*/
	for (i = 1; i < LIMIT; i += f_before) {
		f_before = f_before + i;
		if (!(f_before%2)) {
			sum += f_before;
		}
		if (!(i%2)) {
			sum += i;
		}
	}
	printf("%d\n", sum);
	return 0;
}