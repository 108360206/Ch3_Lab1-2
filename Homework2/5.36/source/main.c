#include <stdio.h>
#include <stdlib.h>
void hanoi(int, int, int, int);

int main(void)
{
	int i;

	printf("總共有多少圓盤要搬?\n");
	scanf_s("%d", &i);
	hanoi(i, 1, 2, 3);

	return 0;
}

void hanoi(int i, int begin, int mid, int last)
{
	if (i == 1) /* 遞迴終止條件 */
		printf("將第 %d 個盤子從第 %d 個塔移到第 %d 個塔\n",
			i, begin, last);
	else
	{
		hanoi(i - 1, begin, last, mid);
		printf("將第 %d 個盤子從第 %d 個塔移到第 %d 個塔\n", i, begin, last);
		hanoi(i - 1, mid, begin, last);
	}
}
