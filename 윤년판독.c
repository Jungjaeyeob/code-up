/*1.윤년은 4년마다 한번씩
  2. 100년 주기는 아님
  3. 400년 주기는 무조건 윤년*/

#include <stdio.h>

int main(void)

{
	int x;

	printf("윤년인지 알고싶은년도를 입력하세요");
	scanf_s("%d", &x);


	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)

		printf("입력하신%d 년은 윤년입니다.", x);

	else

		printf("윤년이 아닙니다.");


	return 0;

	
}