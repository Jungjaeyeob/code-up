/*while ���� �̿��Ͽ� 1���� 100�������ϴ� ���α׷�*/

#include <stdio.h>

int main(void)

{

	int x = 1, sum = 0;

	while (x < 101)
	{
		sum += x;
		x++;
	}

	printf("1���� 100���� �ջ��� %d�Դϴ�.",sum);


	return 0;
}