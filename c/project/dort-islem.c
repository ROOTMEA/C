#include <stdio.h>

int topla(a,b)
int a,b;
{
	int sonuc;
	sonuc=a+b;
	return sonuc;
}

int fark(a,b)
int a,b;
{
	int sonuc;
	sonuc=a-b;
	return sonuc;
}

int carp(a,b)
int a,b;
{
	int sonuc;
	sonuc=a*b;
	return sonuc;
}

int bol(a,b)
int a,b;
{
	int sonuc;
	sonuc=a/b;
	return sonuc;
}

int main()
{
	int x,y,sonuc;

	printf("birinci sayi:");
	scanf("%d",&x);
	printf("ikinci sayi:");
	scanf("%d",&y);

	sonuc=topla(x,y);
	printf("iki sayinin toplami:%d\n",sonuc);

	sonuc=fark(x,y);
	printf("iki sayinin farki:%d\n",sonuc);

	sonuc=carp(x,y);
	printf("iki sayinin carpimi:%d\n",sonuc);

	sonuc=bol(x,y);
	printf("iki sayinin bolumu:%d\n",sonuc);
}
