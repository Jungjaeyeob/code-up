/*break¹®*/

#include <reg51.h>

void main(void)
{
	unsigned char num = 0; 
	while (num < 100)
	{
		P1 = num;
		num++
	}
	if (num == 50)
		break;
}