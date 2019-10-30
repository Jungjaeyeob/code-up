/*while문, for문 만을 사용하여 숫자 피라미드를 만드는 프로그램 */

#include <stdio.h>

int floor;

int number(int x)


{
	printf("몇 층 피라미드를 만들까요?");
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


