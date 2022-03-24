#include <stdio.h>

int main(void)
{
	int n = 5, factorial = 1;
	for (int i = n; i >= 1; i--) {
		factorial *= i;
	}
	printf("%d! = %d\n", n, factorial);

	return 0;
}