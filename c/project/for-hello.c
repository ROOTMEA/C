#include <stdio.h>

char hello(a)
char a[10];
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("Hello %s\n",a);
	}
}

int main()
{
	char isim[10];
	printf("isminizi girin:");
	scanf("%s",isim);
	hello(isim);
}

