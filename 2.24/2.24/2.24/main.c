#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int x;
	printf("��J�@�Ӿ��:");
	scanf_s("%d", &x);
	if (x % 2 == 0)
	{ 
		printf("����");
	}
	if (x % 2 != 0)
	{
		printf("�_��");
	}
	return 0;
}