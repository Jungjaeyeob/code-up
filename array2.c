/*배열을 사용하여 최댓값과 최솟값의 배열 자리를 알아내는 프로그램.*/

#include <stdio.h>
#define NUMBER 4

int main(void)
{
	int array[NUMBER];
	//array라는 배열에 array[0]~array[3]
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

	printf("%d가 가장 큰 숫자이며 배열 %d번째에 있습니다.", max, index);


}

