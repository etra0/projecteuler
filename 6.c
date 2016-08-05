#include <stdio.h>

int main()
{
	int i;
	int square_sum = 0, power_sum = 0;
	for (i = 0; i < 101; i++) {
		power_sum += i*i; 
		square_sum += i;
	}
	printf("%d", square_sum * square_sum - power_sum);
	return 0;
}