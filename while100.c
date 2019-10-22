/*while 문을 이용하여 1부터 100까지더하는 프로그램*/

#include <stdio.h>

int main(void)

{

	int x = 1, sum = 0;

	while (x < 101)
	{
		sum += x;
		x++;
	}

	printf("1부터 100까지 합산은 %d입니다.",sum);


	return 0;
}