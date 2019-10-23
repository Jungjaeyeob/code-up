/*특정 단의 구구단출력*/

#include<stdio.h>
#define y 10
int main(void)

{
	int x, i;

	printf("몇단이 궁금하신가요?");
	scanf_s("%d", &x);

	for (i = 1; i < y; i++)
		printf("%d X %d = %d\n", x, i, x*i);

	return 0;

	
}