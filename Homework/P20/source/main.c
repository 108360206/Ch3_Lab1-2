#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,i;
	for(i=1;i<=20;i++)
	{
		n = (rand() % 6)+1;
		printf("%10d", n);
		if(i%5==0)
		{
			printf("\n");
		}
	}
	system("pause");
	return 0;
}