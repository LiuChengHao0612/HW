#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	float x, y, z, i, j,t ;
	printf("�C�Ѧ�p���{:");
	scanf_s("%f", &x);
	printf("�C�[�ڨT�o������:");
	scanf_s("%f", &y);
	printf("�C�[�ڨT�o��p���{��:");
	scanf_s("%f", &z);
	printf("�C�Ѫ������O:");
	scanf_s("%f", &i);
	printf("�C�Ѫ��L���O:");
	scanf_s("%f", &j);
	t = x * z / y + i + j;
	printf("%f",t);
	return 0;
}