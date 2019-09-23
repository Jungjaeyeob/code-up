#include <stdio.h>

int main(void)

{

	int x = 100, y = 50;

	printf("x = %d      y= %d\n\n", x, y);

	printf("x와 y가 같습니까?  같으면1 아니면0  출력값 : %d \n\n ", x == y); 

	printf("x와 y가 다릅니까?  다르면1 같으면0  출력값 : %d \n\n ", x != y);

	printf("x가 y보다 큽니까?  크면1 작으면0  출력값 : %d \n\n ", x > y);

	printf("x에다가 y를 대입합니다.  출력값 : %d \n\n ", x = y);

	return 0;
}