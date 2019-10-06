/*점수에따라서 서로다른 학점 만들기*/

#include <stdio.h>

int main(void)
{
	int x; 

	printf("당신의 점수를 입력하세요");
	scanf_s("%d", &x);

	if (x > 90)
	{
		printf("A입니다");
	}
	if ((x < 90)&&(x>=80))
	{
		printf("B입니다.");
	}
	if (x < 80)
	{
		printf("C입니다.");
	}

	return 0;
}