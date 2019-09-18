#include <stdio.h>

int main(void)

{
	char n;

	printf("알파벳 하나를 입력하세요");
	scanf_s("%c", &n);

	printf("입력한 알파벳 : %c\n",n);
	return 0;
}