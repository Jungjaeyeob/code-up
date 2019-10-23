/*goto¹®*/

#include <reg51.h>

void main(void)

{
	unsigned char num = 0;

	while (num++ < 100)
	{
		if (num == 50)
			goto label_1;

			P1 = num;
}
label_1:
P1 = 100;

return 0;
}
