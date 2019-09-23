#include <stdio.h>

int main(void)

{
	int x = -50, y = 100;

	int absoluteX = (x > 0) ? x : -x;
	int max = (x > y) ? x : y;
	int min = (x < y) ? x : y;

	printf("x의 절대값은 %d 입니다.\n\n", absoluteX);
	printf("최댓값은 %d 입니다.\n\n", max);
	printf("최솟값은 %d 입니다.\n\n", min);
	
	return 0;


 
}