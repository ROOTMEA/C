/*
Kullanýcýdan iki tam sayý alan, bu sayýlarýn farkýný, çarpýmýný, ikinci
sayýnýn birinci sayýya bölümünden elde edilen sonucu ve kalaný
hesaplayan bir C++ programý yazýnýz.
*/

#include <iostream>

using namespace std;

int main()
{
	int a,b;
	int fark,carp,bol,kalan;
	
	cout<<"Birinci sayiyi giriniz:";
	cin>>a;
	cout<<"Ikinci Sayiyi giriniz:";
	cin>>b;
	
	fark=a-b;
	carp=a*b;
	bol=a/b;
	kalan=a%b;
	
	cout<<"Fark:"<<fark<<"\nCarp:"<<carp<<"\nBol:"<<bol<<"\nKalan:"<<kalan;	
	
	return 0;
}
