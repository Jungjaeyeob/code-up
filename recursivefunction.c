/*특정한 문자열을 "재귀함수"를 이용하여 반복출력하는 프로그램*/

#include <stdio.h>


int a;


void counter(int a)
{
	if (a == 0)
	{
		return;

	}
	else
		printf("문자열을 출력합니다\n");
	counter(a- 1);


}

int main()
{
	printf("문자열을 몇개 출력 할까요?");
	scanf_s("%d", &a);
	counter(a);
}