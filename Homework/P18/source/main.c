#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void)
{ 
	char s1[60]="Welcome";
	char s2[60]="Welcome";
	int len;
	//strcpy(s2,&s1);
	printf("String2=%s\n", s2);

	len = strlen(s2);
	printf("�r����׬�%d\n", len);

	system("pause");
	return 0;
}