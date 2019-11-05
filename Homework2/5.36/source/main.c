#include <stdio.h>
#include <stdlib.h>
void hanoi(int, int, int, int);

int main(void)
{
	int i;

	printf("�`�@���h�ֶ�L�n�h?\n");
	scanf_s("%d", &i);
	hanoi(i, 1, 2, 3);

	return 0;
}

void hanoi(int i, int begin, int mid, int last)
{
	if (i == 1) /* ���j�פ���� */
		printf("�N�� %d �ӽL�l�q�� %d �Ӷ𲾨�� %d �Ӷ�\n",
			i, begin, last);
	else
	{
		hanoi(i - 1, begin, last, mid);
		printf("�N�� %d �ӽL�l�q�� %d �Ӷ𲾨�� %d �Ӷ�\n", i, begin, last);
		hanoi(i - 1, mid, begin, last);
	}
}
