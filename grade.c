/*���������� ���δٸ� ���� �����*/

#include <stdio.h>

int main(void)
{
	int x; 

	printf("����� ������ �Է��ϼ���");
	scanf_s("%d", &x);

	if (x > 90)
	{
		printf("A�Դϴ�");
	}
	if ((x < 90)&&(x>=80))
	{
		printf("B�Դϴ�.");
	}
	if (x < 80)
	{
		printf("C�Դϴ�.");
	}

	return 0;
}