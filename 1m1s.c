#include <stdio.h>
#define x getsec

int main(void)

{

	int getsec;
	int sec;
	int min;




	printf("초를 입력하세요");
	scanf_s("%d", &getsec);

	sec =  x % 60;
    min = x / 60;

	printf("%d분 %d초 입니다.\n", min,sec);

	return 0;

	
}