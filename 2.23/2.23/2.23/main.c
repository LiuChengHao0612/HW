#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int x, y, z;
	printf("�Ĥ@�Ӿ��:");
	scanf_s("%d",&x);
	printf("�ĤG�Ӿ��:");
	scanf_s("%d", &y);
	printf("�ĤT�Ӿ��:");
	scanf_s("%d", &z);
	if (x > y & x > z)
	{
	printf("�̤j��:");
	printf("%d" ,x);
	}
	if (y > x & y > z)
	{
		printf("�̤j��:");
		printf("%d", y);
	}
    if (z > y & z > x)
	{
		printf("�̤j��:");
		printf("%d", z);
	}
	printf("\n");
	if (x < y & x < z)
	{
		printf("�̤p��:");
		printf("%d", x);
	}
	if (y < x & y < z)
	{
		printf("�̤p��:");
		printf("%d", y);
	}
	if (z < y & z < x)
	{
		printf("�̤p��:");
		printf("%d", z);
	}
	return 0;
}