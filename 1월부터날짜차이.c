/*1�� 1�Ϻ��� ���� ��¥ ������ ����*/

#include <stdio.h>

int month, day, i,sum;

void equal()
{


	month -= 1;
	sum = month * 30 + day;
	return sum;


}




int main(void)
{
	printf("���� ���� �Է��ϼ���");
	scanf_s("%d", &month);
	printf("���� ���� �Է��ϼ���");
	scanf_s("%d", &day);

	equal();

	printf("1��1�Ϻ��� ��������� �ϼ� ���̴� %d�� �Դϴ�.", sum);

	return 0;
}