#include <reg51.h>

void delay(unsigned int i)
{
while (i--);
}


void main(void)
{
unsigned char led =0x7f;

do{
	 P1= led; 
	 if(led == 0x7f) led = 0xbf;
	 else if(led == 0xbf) led = 0xdf;
	 else if(led == 0xdf) led = 0xef;
	 else if(led == 0xef) led = 0xf7;
	 else if(led == 0xf7) led = 0xfb;
	 else if(led == 0xfb) led = 0xfd;
	 else if(led == 0xfd) led = 0xfe;
	 else if(led == 0xfe) led = 0xff;
	 else                 led = 0x7f;
	 delay(0xb100);
}while(1);
}