/*Ư���� ���ڿ��� "����Լ�"�� �̿��Ͽ� �ݺ�����ϴ� ���α׷�*/

#include <stdio.h>


int a;


void counter(int a)
{
	if (a == 0)
	{
		return;

	}
	else
		printf("���ڿ��� ����մϴ�\n");
	counter(a- 1);


}

int main()
{
	printf("���ڿ��� � ��� �ұ��?");
	scanf_s("%d", &a);
	counter(a);
}