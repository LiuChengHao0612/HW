#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int x, y;
	printf("��J�Ĥ@�Ӽƭ�x:");
	scanf_s("%d", &x);
	printf("��J�ĤG�Ӽƭ�y:");
	scanf_s("%d", &y);
	if (x%y == 0)
	{
		printf("x�Oy������");
	}
	if (x%y != 0)
	{
		printf("x���Oy������");
	}
	return 0;
}