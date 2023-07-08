#include <stdio.h>

int main(){
	int a,b,toplam;
	float ort;

	printf("iki sayi girin:");
	scanf("%d %d",&a,&b);
	toplam=a+b;
	ort=toplam/2;
	printf("Ortalama:%f\n",ort);
}
