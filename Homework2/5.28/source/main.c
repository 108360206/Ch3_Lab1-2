#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int b = 0, c = 3;
	char ad=' ';
	while (ad!='AD')
	{
	printf("enter (A~Z) : ");
	scanf_s("%c", &ad,100);
	switch (ad)
	{
	case'A':
		printf("�ഫ%c\n", 97);
		break;
	case'B':
		printf("�ഫ%c\n", 98);
		break;
	case 'C':
		printf("�ഫ%c\n", 99);
		break;
	case 'D':
		printf("�ഫ%c\n", 100);
		break;
	case 'E':
		printf("�ഫ%c\n", 101);
		break;
	case'F':
		printf("�ഫ%c\n", 102);
		break;
	case'G':
		printf("�ഫ%c\n", 103);
		break;
	case'H':
		printf("�ഫ%c\n", 104);
		break;
	case'I':
		printf("�ഫ%c\n", 105);
		break;
	case'J':
		printf("�ഫ%c\n", 106);
		break;
	case'K':
		printf("�ഫ%c\n", 107);
		break;
	case'L':
		printf("�ഫ%c\n", 108);
		break;
	case'M':
		printf("�ഫ%c\n", 109);
		break;
	case'N':
		printf("�ഫ%c\n", 110);
		break;
	case'O':
		printf("�ഫ%c\n", 111);
		break;
	case'P':
		printf("�ഫ%c\n", 112);
		break;
	case'Q':
		printf("�ഫ%c\n", 113);
		break;
	case'R':
		printf("�ഫ%c\n", 114);
		break;
	case'S':
		printf("�ഫ%c\n", 115);
		break;
	case'T':
		printf("�ഫ%c\n", 116);
		break;
	case'U':
		printf("�ഫ%c\n", 117);
		break;
	case'V':
		printf("�ഫ%c\n", 118);
		break;
	case'W':
		printf("�ഫ%c\n", 119);
		break;
	case'X':
		printf("�ഫ%c\n", 120);
		break;
	case'Y':
		printf("�ഫ%c\n", 121);
		break;
	case'Z':
		printf("�ഫ%c\n", 122);
		break;
	default:
		printf("\n�п�J���T�r��");
		break;
	}
	}
		system("pause");
		return 0;
}