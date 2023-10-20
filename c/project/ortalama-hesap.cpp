#include <iostream>

using namespace std;

int main()
{
	int ortalama,finalNot,vizeNot,odevNot;
	
	cout<<"Final Notu:";
	cin>>finalNot;
	cout<<"Vize Notu:";
	cin>>vizeNot;
	cout<<"Odev Notu:";
	cin>>odevNot;
	
	ortalama=0.50*finalNot+0.35*vizeNot+0.15*odevNot;
	
	cout<<"Ortalama:"<<ortalama;
	return 0;
}
