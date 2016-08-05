#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0

int verify_prime(long n)
{
	int i;
	for (i = 3; i <= sqrt(n); i++) {
		if (!(n % i))
			return FALSE;
	}
	return TRUE;
}

int main()
{
	long i;
	/* 1, 2 and 3 are primes, so we start with sum 3 */
	int primes = 3;
	/* all even numbers obviously aren't primes
	 * So we have to ignore them adding 2 to a
	 * odd number
	 */
	printf("%d", verify_prime(5));
	for (i = 5; primes <= 10001; i += 2) {
		if (verify_prime(i))
			primes++;
		printf("%d %ld\n", primes, i);
	}
	/* In the last iteration, adds 2. Lazy patch. */
	i--; i--;
	printf("%ld", i);
}