/*for문을 이용하여 피라미드 만들기*/

#include<stdio.h>
#define N 20

int main(void)

{
	int i, j ,x;

	for (i = 0; i < N; i++)
	{
		for (j = N - i - 1; j > 0; j--)
			printf("  ");
		{
			for (j = 0; i > j ; j++)
				printf("★");
		}
		{
			for (j = 0; i - 1 > j; j++)
				printf("★");
		}
		printf("\n");
	}

	return 0;
}