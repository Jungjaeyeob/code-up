/*Ư�� ���� ���������*/

#include<stdio.h>
#define y 10
int main(void)

{
	int x, i;

	printf("����� �ñ��ϽŰ���?");
	scanf_s("%d", &x);

	for (i = 1; i < y; i++)
		printf("%d X %d = %d\n", x, i, x*i);

	return 0;

	
}