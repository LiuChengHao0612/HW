#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int x, y;
	printf("块材计x:");
	scanf_s("%d", &x);
	printf("块材计y:");
	scanf_s("%d", &y);
	if (x%y == 0)
	{
		printf("x琌y计");
	}
	if (x%y != 0)
	{
		printf("xぃ琌y计");
	}
	return 0;
}