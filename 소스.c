#include <stdio.h>

int main(void)

{
	int n;

	printf("숫자 하나를 입력하세요");
	scanf_s("%d", &n);

	printf("입력한 숫자는 %d 입니다\n",n);
	return 0;
}