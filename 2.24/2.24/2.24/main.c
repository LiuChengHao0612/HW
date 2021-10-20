#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int x;
	printf("块俱计:");
	scanf_s("%d", &x);
	if (x % 2 == 0)
	{ 
		printf("案计");
	}
	if (x % 2 != 0)
	{
		printf("计");
	}
	return 0;
}