/*�Է� ������ ������� ���������� �����ϴ� ���α׷�*/

#include <stdio.h>

int main(void)

{
	int x;

	printf("-100���� +100 ������ ���ڸ� �Է��ϼ���");
	scanf_s("%d", &x);

	if (x < 0)
	{
		
		printf("�Է��Ͻ� %d�� �����Դϴ�.", x);

	}
	else 
	printf("�Է��Ͻ� %d�� ��� �Դϴ�.", x);

	return 0;
}