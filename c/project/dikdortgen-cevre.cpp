#include <iostream>

using namespace std;

int main()
{
	int kisaKenar,uzunKenar,cevre,alan;
	
	cout<<"Kisa Kenar:";
	cin>>kisaKenar;
	cout<<"Uzun Kenar:";
	cin>>uzunKenar;
	
	cevre=2*(kisaKenar+uzunKenar);
	alan=kisaKenar*uzunKenar;
	
	cout<<"CEVRE:"<<cevre;
	cout<<"\nALAN:"<<alan;
	return 0;
}
