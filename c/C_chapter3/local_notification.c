#include <stdio.h>
int ikikat();

int main()
{
	auto int a,b;

	a=6;
	b=ikikat(a);

	printf("%d nin iki katı:%d\n",a,b);
}

int ikikat(k)
int k;
{
	auto int gecici;

	gecici=k*2;
	return gecici;
}