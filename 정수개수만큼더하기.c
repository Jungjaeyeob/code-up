/*정수의 갯수를 입력받고 정수들을 모두 더하는 프로그램  */

#include<stdio.h>

int main()
{
	int x, y,i,sum=0;
	printf("정수의 갯수를 입력하세요:\n ");
	scanf_s("%d", &x);

	for (i = 0; i < x; i++)
	{
		printf("정수를 입력하세요");
		scanf_s("%d", &y);
		sum += y;
	}

	printf("모든 수의 합은 %d 입니다.", sum);

	return 0;

	
}