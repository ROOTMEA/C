#include <stdio.h>

float bol(a,b)
int a,b;
{
	float g;

	g=(float)a/b;
	return g;
}

int topla(a,b)
int a,b;
{
	int g;

	g=a+b;
	return g;
}

int main()
{
	int x,y,z;
	float f;

	printf("Birinci sayi girin:");
	scanf("%d",&x);
	printf("Ikinci sayi girin:");
	scanf("%d",&y);
	z=topla(x,y);
	f=bol(x,y);
	printf("Iki sayinin toplami=%d\nbolumu=%f\n",z,f);
}
