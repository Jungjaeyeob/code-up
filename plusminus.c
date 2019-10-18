/*입력 했을때 양수인지 음수인지를 구별하는 프로그램*/

#include <stdio.h>

int main(void)

{
	int x;

	printf("-100부터 +100 사이의 숫자를 입력하세요");
	scanf_s("%d", &x);

	if (x < 0)
	{
		
		printf("입력하신 %d는 음수입니다.", x);

	}
	else 
	printf("입력하신 %d는 양수 입니다.", x);

	return 0;
}