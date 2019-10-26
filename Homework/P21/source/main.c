#include <stdio.h>
#include <stdlib.h>

int square(int y);

int main(void)
{
	int n, i;
	unsigned seed;
	
	printf("Enter seed:");
	scanf_s("%u",&seed);

	srand(seed);

	for (i = 1; i <= 10; i++)
	{
		n = (rand() % 6) + 1;
		printf("%10d", n);
		if (i % 5 == 0)
		{
			printf("\n");
		}
	}
	system("pause");
	return 0;
}