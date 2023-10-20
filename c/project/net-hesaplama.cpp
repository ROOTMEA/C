/*
Kullanýcýdan bir öðrencinin 4 doðru cevabýn 1 yanlýþ cevabý götürdüðü
sýnavda yaptýðý doðru ve yanlýþ sayýlarýný alarak öðrencinin netini
hesaplayan bir C++ programý yazýnýz.
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
