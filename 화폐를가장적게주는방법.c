/*Ư���� �ݾ��� �޾Ƽ� ���� ���� �Ž��� ȭ���� ������ ���ϴ� �Լ�*/

#include <stdio.h>

int x, y,z, won1, won2, won3;

void counter()
{
	won1 = x / 50000;
	y = x % 50000;
	won2 = y / 10000;
	z = y % 10000;
	won3 = z / 1000;
}
int main()
{

	printf("���Թ��� �ݾ��� �Է��ϼ���!");
	scanf_s("%d", &x);

	counter();
	printf("�������� ȭ�󰳼��� ������¥�� %d��\n����¥���� %d��\nõ��¥�� %d�� ��Ƚ��ϴ�.\n", won1, won2, won3);

	return 0;
}