#include <stdio.h>

int bol(a,b,c)
int a,b,c;
{
		float sonuc;
		sonuc=(a+b)/c;
		printf("Sonuc:%f\n",sonuc);
}

int main()
{
		int x,y,z;
			
		printf("Birinci sayi:");
		scanf("%d",&x);
		printf("Ikinci sayi:");
		scanf("%d",&y);
		printf("Ucuncu sayi:");
		scanf("%d",&z);
		
		bol(x,y,z);			
}
