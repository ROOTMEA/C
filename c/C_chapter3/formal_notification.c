#include <stdio.h>

int fonk(a,b,c)
int a,b;
char c;
{
	int cevap;

	cevap=a+b;
	printf("Sonuc kodu:%c\nSonuc:%d\n",c,cevap);
}

int main()
{
	int a,b;
	char c;

	printf("Cevap kodu(bir harf girin):");
	scanf("%c",&c);

	printf("birinci sayi:");
	scanf("%d",&a);

	printf("ikinci sayi:");
	scanf("%d",&b);

	fonk(a,b,c);
}