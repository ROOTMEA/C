/*
Kullan�c�dan bir ��rencinin 4 do�ru cevab�n 1 yanl�� cevab� g�t�rd���
s�navda yapt��� do�ru ve yanl�� say�lar�n� alarak ��rencinin netini
hesaplayan bir C++ program� yaz�n�z.
*/

#include <iostream>

using namespace std;

int main()
{
	int dogru,yanlis,net;
	
	cout<<"Dogru sayin:";
	cin>>dogru;
	cout<<"Yanlis sayin:";
	cin>>yanlis;
	
	net=dogru-(yanlis/4);
	
	cout<<"Net:"<<net;
	
	
	
	return 0;
}
