/*배열을 사용하여 최댓값과 최솟값의 배열 자리를 알아내는 프로그램.*/

#include <stdio.h>
#define NUMBER 4

int main(void)
{
	int array[NUMBER];
	//array라는 배열에 array[0]~array[3]
	int max, min, index, x, y, yy, yyy;

	for (index = 0; index < 4; index++)
	{
		printf("숫자 하나를 입력하세요");
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

	printf("가장 큰 숫자는 %d입니다.자리는 %d번째 자리입니다.", yyy);
}






