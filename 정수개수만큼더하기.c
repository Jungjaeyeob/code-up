/*������ ������ �Է¹ް� �������� ��� ���ϴ� ���α׷�  */

#include<stdio.h>

int main()
{
	int x, y,i,sum=0;
	printf("������ ������ �Է��ϼ���:\n ");
	scanf_s("%d", &x);

	for (i = 0; i < x; i++)
	{
		printf("������ �Է��ϼ���");
		scanf_s("%d", &y);
		sum += y;
	}

	printf("��� ���� ���� %d �Դϴ�.", sum);

	return 0;

	
}