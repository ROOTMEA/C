#include <stdio.h>

int ver()
{
	static int k;

	k=k+5;
	return k;
}

int main()
{

	printf("%d\n",ver());
}
