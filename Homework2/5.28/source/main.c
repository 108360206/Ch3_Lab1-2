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
		printf("锣传%c\n", 97);
		break;
	case'B':
		printf("锣传%c\n", 98);
		break;
	case 'C':
		printf("锣传%c\n", 99);
		break;
	case 'D':
		printf("锣传%c\n", 100);
		break;
	case 'E':
		printf("锣传%c\n", 101);
		break;
	case'F':
		printf("锣传%c\n", 102);
		break;
	case'G':
		printf("锣传%c\n", 103);
		break;
	case'H':
		printf("锣传%c\n", 104);
		break;
	case'I':
		printf("锣传%c\n", 105);
		break;
	case'J':
		printf("锣传%c\n", 106);
		break;
	case'K':
		printf("锣传%c\n", 107);
		break;
	case'L':
		printf("锣传%c\n", 108);
		break;
	case'M':
		printf("锣传%c\n", 109);
		break;
	case'N':
		printf("锣传%c\n", 110);
		break;
	case'O':
		printf("锣传%c\n", 111);
		break;
	case'P':
		printf("锣传%c\n", 112);
		break;
	case'Q':
		printf("锣传%c\n", 113);
		break;
	case'R':
		printf("锣传%c\n", 114);
		break;
	case'S':
		printf("锣传%c\n", 115);
		break;
	case'T':
		printf("锣传%c\n", 116);
		break;
	case'U':
		printf("锣传%c\n", 117);
		break;
	case'V':
		printf("锣传%c\n", 118);
		break;
	case'W':
		printf("锣传%c\n", 119);
		break;
	case'X':
		printf("锣传%c\n", 120);
		break;
	case'Y':
		printf("锣传%c\n", 121);
		break;
	case'Z':
		printf("锣传%c\n", 122);
		break;
	default:
		printf("\n叫块タ絋ダ");
		break;
	}
	}
		system("pause");
		return 0;
}