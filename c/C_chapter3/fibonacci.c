#include <stdio.h>

int fibonacci()
{
	static int f1=1, f2=1;
	int g;

	g=f1+f2;
	f1=f2;
	f2=g;
	return g;
}

int say()
{
	static int say=0;
	say=say+1;
	return say;
}

int main()
{
	printf("%d-%d\n",say(),fibonacci());
	printf("%d-%d\n",say(),fibonacci());
	printf("%d-%d\n",say(),fibonacci());
	printf("%d-%d\n",say(),fibonacci());
	printf("%d-%d\n",say(),fibonacci());
	printf("%d-%d\n",say(),fibonacci());
	printf("%d-%d\n",say(),fibonacci());
	printf("%d-%d\n",say(),fibonacci());
	printf("%d-%d\n",say(),fibonacci());
	printf("%d-%d\n",say(),fibonacci());
}