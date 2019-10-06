/*if문을 이용하여 절댓값 구하기*/

#include <stdio.h>

int main()

{
	int x;

	printf("실수 하나를 입력해주세요");
	scanf_s("%d", &x);

	if (x < 0)
	{
		x = -x;

		
	}
	printf("입력하신 x의 절댓값은 %d 입니다.", x);

	return 0;
	
}