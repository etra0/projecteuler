#include <stdio.h>
#include <math.h>

int main()
{
	int i = 1, j = 1;
	float pythagoras;
	while (i++) {
		for (j = 0; j < 1000; j++) {
			pythagoras = sqrt((pow(i, 2) + pow(j, 2)));
			printf("%f\n", pythagoras);
			if (pythagoras + i + j == 1000) {
				printf("%f", pythagoras * i * j);
				return 1;
			}

		}
	}

	return 0;
}