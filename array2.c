/*�迭�� ����Ͽ� �ִ񰪰� �ּڰ��� �迭 �ڸ��� �˾Ƴ��� ���α׷�.*/

#include <stdio.h>
#define NUMBER 4

int main(void)
{
	int array[NUMBER];
	//array��� �迭�� array[0]~array[3]
	int max, min, index;
	max = 0;
	index = 0;
	int i;

	for (i = 0; i < NUMBER; i++)
	{
		scanf_s("%d", &array[i]);

		if (max < array[i])
		{
			max = array[i];
			index = i;
		}
	}

	printf("%d�� ���� ū �����̸� �迭 %d��°�� �ֽ��ϴ�.", max, index);


}

