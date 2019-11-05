#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a=0, b=0, c,x;
	float d;
	printf("enter two integers :");
	scanf_s("%d %d", &a, &b);
	for (int i = 0; i <  10000; i++)
	{
		c = a * i;
		if((c%b)==0)
		{
			break;
		}
	}
	printf("\nleast common Multiple :%d",a);
	system("pause");
	return 0;
}