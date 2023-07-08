#include <stdio.h>

int cikart(a,b)
int a,b;
{
	int sonuc;
	sonuc=a-b;
	printf("sonuc:%d\n",sonuc);
}

int main()
{
	int a,b;
	
	printf("birinci sayi;");
	scanf("%d",&a);
	printf("ikinci sayi;");
	scanf("%d",&b);
	cikart(a,b);
	
}
