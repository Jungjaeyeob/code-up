/*�迭�� ����Ͽ� �ִ񰪰� �ּڰ��� �迭 �ڸ��� �˾Ƴ��� ���α׷�.*/

#include <stdio.h>
#define NUMBER 4

int main(void)
{
	int array[NUMBER];
	//array��� �迭�� array[0]~array[3]
	int max, min, index, x, y, yy, yyy;

	for (index = 0; index < 4; index++)
	{
		printf("���� �ϳ��� �Է��ϼ���");
		scanf_s("%d", &x);
		array[index] = x;
	}

	if (array[0] > array[1])
		y = array[0];

	else
		y = array[1];

	if (y > array[2])
		yy = y;

	else yy = array[2];

	if (yy > array[3])
		yyy = yy;

	else yyy = array[3];

	printf("���� ū ���ڴ� %d�Դϴ�.�ڸ��� %d��° �ڸ��Դϴ�.", yyy);
}






