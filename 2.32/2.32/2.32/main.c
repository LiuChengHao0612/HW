#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	float x,y;
	printf("體重(kg):");
	scanf_s("%f", &x);
	printf("身高(m):");
	scanf_s("%f",&y);
	printf("BMI VALUES:%f", x/(y*y));
	printf("\n");
	printf("狀況:");
	if (x / (y*y) > 30)
	{
        printf("Obese");
	}
	if (x / (y*y) < 18.5)
	{
		printf("Underweight");
	}
	if (18.5<x / (y*y) &&x / (y*y) < 24.9)
	{
		printf("Normal");
	}
	if (25 < x / (y*y) && x / (y*y) < 29.9)
	{
		printf("Overweight");
	}
	return 0;
}