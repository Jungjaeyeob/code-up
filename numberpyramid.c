/*while��, for�� ���� ����Ͽ� ���� �Ƕ�̵带 ����� ���α׷� */

#include <stdio.h>

int floor;

int number(int x)


{
	printf("�� �� �Ƕ�̵带 ������?");
	scanf_s("%d", &floor);
}


    

int main()

{
	number(floor);

	int i, j;

	for (i = 1; i <= floor; i++)
	{
		for (j = 0; i > j; j++)
		{
			printf("%d ", i);
		}
		printf("\n");

	}


}


