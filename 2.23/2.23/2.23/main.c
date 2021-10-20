#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int x, y, z;
	printf("材俱计:");
	scanf_s("%d",&x);
	printf("材俱计:");
	scanf_s("%d", &y);
	printf("材俱计:");
	scanf_s("%d", &z);
	if (x > y & x > z)
	{
	printf("程:");
	printf("%d" ,x);
	}
	if (y > x & y > z)
	{
		printf("程:");
		printf("%d", y);
	}
    if (z > y & z > x)
	{
		printf("程:");
		printf("%d", z);
	}
	printf("\n");
	if (x < y & x < z)
	{
		printf("程:");
		printf("%d", x);
	}
	if (y < x & y < z)
	{
		printf("程:");
		printf("%d", y);
	}
	if (z < y & z < x)
	{
		printf("程:");
		printf("%d", z);
	}
	return 0;
}