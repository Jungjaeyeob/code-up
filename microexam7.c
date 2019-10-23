/*continue¹®*/

#include <reg51.h>

void main(void)
{
	unsigned char num = 0;

	while (num++ < 100) {
		if (num % 2 == 1)
			continue;
		else
			P1 = num;
	}

	return 0;
}
