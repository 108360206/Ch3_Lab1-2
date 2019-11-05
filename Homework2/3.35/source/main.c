#include <stdio.h>
#include <stdlib.h>

unsigned int fibonacci(n);
//unsigned long long int fibonacci2(n);

int main(void)
{
	int input, i;
	printf("ex : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233 ...\n\n");
	while (1) {
		
		printf("Please input an integer to show the last value of Fibonacci Sequence :\n");
		scanf_s("%d", &input);
		printf("\n");

		if (input < 0)
			printf("\nInput cannot less than 0\n\n");

		else {
			for (i = 0; i <= input; i++)
				printf("%d  ", fibonacci(i));
		}

		printf("\n\n");
	}
	system("PAUSE");
	return 0;
}
int fibonacci(int n) {

	if (n == 0)
		return 0;

	if (n == 1)
		return 1;

	return (fibonacci(n - 1) + fibonacci(n - 2));

}


