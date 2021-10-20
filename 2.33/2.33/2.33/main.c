#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	float x, y, z, i, j,t ;
	printf("每天行駛里程:");
	scanf_s("%f", &x);
	printf("每加侖汽油的價格:");
	scanf_s("%f", &y);
	printf("每加侖汽油行駛里程數:");
	scanf_s("%f", &z);
	printf("每天的停車費:");
	scanf_s("%f", &i);
	printf("每天的過路費:");
	scanf_s("%f", &j);
	t = x * z / y + i + j;
	printf("%f",t);
	return 0;
}