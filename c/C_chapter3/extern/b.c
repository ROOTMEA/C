#include <stdio.h>

extern int x,y;

void b(void)
{
	x=66;
	y=99;

	printf("x=%d\ny=%d\n",x,y);
}


