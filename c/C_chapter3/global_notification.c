#include <stdio.h>

int a,b;

void ikikat();

int main()
{
	b=7;
	ikikat();
	printf("%d nin iki kati;%d\n",b,a);
}

void ikikat()
{
	a=b*2;
}
