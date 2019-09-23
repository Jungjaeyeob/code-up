#include <stdio.h>

int main(void)

{

	int x = 1;

	printf("%d\n", x);

	printf("x++    %d\n", x++); // 먼저 출력을 하고나서 1이 추가된다. 예상 출력 값 1
 
	printf("++x    %d\n", ++x); // 1이 먼저 추가되고 나서 출력이 된다. 예상 출력 값 3

	

	return 0;




}