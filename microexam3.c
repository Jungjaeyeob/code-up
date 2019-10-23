#include <reg51.h>

void main(void)
{
	unsigned char i, sum = 0; //변수 선언과 초기화
	
	for (i = 1; i <= 10; i++)
	{
		sum += i;
		P1 = sum;
	}
	return 0;
}