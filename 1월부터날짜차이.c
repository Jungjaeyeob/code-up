/*1월 1일부터 현재 날짜 까지의 차이*/

#include <stdio.h>

int month, day, i,sum;

void equal()
{


	month -= 1;
	sum = month * 30 + day;
	return sum;


}




int main(void)
{
	printf("현재 월을 입력하세요");
	scanf_s("%d", &month);
	printf("현재 일을 입력하세요");
	scanf_s("%d", &day);

	equal();

	printf("1월1일부터 현재까지의 일수 차이는 %d일 입니다.", sum);

	return 0;
}