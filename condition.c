#include <stdio.h>

int main(void)

{
	int x = -50, y = 100;

	int absoluteX = (x > 0) ? x : -x;
	int max = (x > y) ? x : y;
	int min = (x < y) ? x : y;

	printf("x�� ���밪�� %d �Դϴ�.\n\n", absoluteX);
	printf("�ִ��� %d �Դϴ�.\n\n", max);
	printf("�ּڰ��� %d �Դϴ�.\n\n", min);
	
	return 0;


 
}