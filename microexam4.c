/*switch ���� ����Ͽ� �� ��Ʈ�� 16���� ���� ����ϱ�*/

#include <reg51.h>

void main(void)

{
	unsigned char num = 2;
	swich(num + 1) {
		case 1:
			P1 = 0x01;
			break;
		case 2:
			P1 = 0x02;
			break;
		case 3:
			P1 = 0x03;
			break;
		default:
			P1 = 0xff;
			break;
	}
}