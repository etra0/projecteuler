#include <stdio.h>
#include <math.h>
#define LIMIT 600851475143

typedef enum {FALSE, TRUE} bool;

bool is_prime(long value) {
	long i;
	int root = sqrt(value);
	for (i = 2; i < root; i++) {
		if (!(value%i))
			return FALSE;
	}
	return TRUE;
}

int main()
{
	long i = 1;
	long max;
	int root = sqrt(LIMIT);
	for (i = 3; i < root; i += 2){
		if (is_prime(i) && !(LIMIT%i))
			max = i;
	}
	printf("%ld\n", max);
}