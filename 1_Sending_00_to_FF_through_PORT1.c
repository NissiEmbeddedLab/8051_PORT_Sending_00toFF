#include<reg51.h>
void main(void)
{
	unsigned char z;
	z=0;
	for(z=0;z<=255;z++)
	P1 = z;
}