/*if���� �̿��Ͽ� ���� ���ϱ�*/

#include <stdio.h>

int main()

{
	int x;

	printf("�Ǽ� �ϳ��� �Է����ּ���");
	scanf_s("%d", &x);

	if (x < 0)
	{
		x = -x;

		
	}
	printf("�Է��Ͻ� x�� ������ %d �Դϴ�.", x);

	return 0;
	
}