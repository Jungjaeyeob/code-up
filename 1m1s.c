#include <stdio.h>
#define x getsec

int main(void)

{

	int getsec;
	int sec;
	int min;




	printf("�ʸ� �Է��ϼ���");
	scanf_s("%d", &getsec);

	sec =  x % 60;
    min = x / 60;

	printf("%d�� %d�� �Դϴ�.\n", min,sec);

	return 0;

	
}