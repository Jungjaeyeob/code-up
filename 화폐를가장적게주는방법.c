/*특정한 금액을 받아서 가장 적은 거스름 화폐의 개수를 구하는 함수*/

#include <stdio.h>

int x, y,z, won1, won2, won3;

void counter()
{
	won1 = x / 50000;
	y = x % 50000;
	won2 = y / 10000;
	z = y % 10000;
	won3 = z / 1000;
}
int main()
{

	printf("적게받을 금액을 입력하세요!");
	scanf_s("%d", &x);

	counter();
	printf("가장적은 화폐개수인 오만원짜리 %d장\n만원짜리원 %d장\n천원짜리 %d장 드렸습니다.\n", won1, won2, won3);

	return 0;
}