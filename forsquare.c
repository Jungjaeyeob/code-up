/*for문을 이용하여 사각형을 출력하세요*/

#include <stdio.h>
#define N 10

int main(void)

{
	int i,j;

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("★");

		}
		printf("\n");
	}
	    
	  

	return 0;

	
}