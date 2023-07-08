#include <stdio.h>

int tamfark(a,b)
float a,b;
{
	int sonuc;

	sonuc=a-b;

	return sonuc;
}

int main()
{
	float x,y;
	int sonuc;

	printf("birinci sayi:");
	scanf("%f",&x);
	printf("ikinci sayi:");
	scanf("%f",&y);

	sonuc=tamfark(x,y);
	printf("Sonuc:%d\n",sonuc);
}


