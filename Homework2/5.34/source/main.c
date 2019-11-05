#include <stdio.h>
#include <stdlib.h>

int power(int, int);
int main(void)
{
	int a, b, c;
    printf("base, exponent :");
	scanf_s("%d %d", &a, &b);
	c=power(a, b);
	printf("answer :%d", c);
}

int power(int x,int y)
{
	int f=1;
	for (int i = 1; i <= y; i++)
	{
		f = f * x;
	}
	return f;
}