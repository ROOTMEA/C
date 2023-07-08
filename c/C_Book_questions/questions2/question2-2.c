#include <stdio.h>

float topla(a,b)
float a,b;
{
	int sonuc;
	
	sonuc=a+b;
	
	return sonuc;
}

int main()
{
	float x,y;
	int sonuc;
			
	printf("Birinci sayi:");
	scanf("%f",&x);
	printf("Ikinci sayi:");
	scanf("%f",&y);
	
	sonuc=topla(x,y);
	
	printf("Sonuc:%d\n",sonuc);
}
