#include <stdio.h>

int factorial(int n) {
	if (n == 1) return 1;
	return n * factorial(n - 1);
}

int main(void)
{
	/*int n = 5, factorial = 1;
	for (int i = n; i >= 1; i--) {
		factorial *= i;
	}
	printf("%d! = %d\n", n, factorial);

	return 0;*/

	int n = 5;

	printf("%d! = %d\n", n, factorial(n));
	
	return 0;
}

