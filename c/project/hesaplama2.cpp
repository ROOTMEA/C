/*
Kullan�c�dan iki tam say� alan, bu say�lar�n fark�n�, �arp�m�n�, ikinci
say�n�n birinci say�ya b�l�m�nden elde edilen sonucu ve kalan�
hesaplayan bir C++ program� yaz�n�z.
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
