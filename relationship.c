#include <stdio.h>

int main(void)

{

	int x = 100, y = 50;

	printf("x = %d      y= %d\n\n", x, y);

	printf("x�� y�� �����ϱ�?  ������1 �ƴϸ�0  ��°� : %d \n\n ", x == y); 

	printf("x�� y�� �ٸ��ϱ�?  �ٸ���1 ������0  ��°� : %d \n\n ", x != y);

	printf("x�� y���� Ů�ϱ�?  ũ��1 ������0  ��°� : %d \n\n ", x > y);

	printf("x���ٰ� y�� �����մϴ�.  ��°� : %d \n\n ", x = y);

	return 0;
}