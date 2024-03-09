#include <stdio.h>

void divnumb(int N)
{
	for(int i=1;i<=N;i++)
	{
		if(N%i==0)
			printf("Divining Number:%d\n",i);
		}
	return;
}

int main()
{
	int N;
	
	printf("Enter the number:");
	scanf("%d",&N);
			
	divnumb(N);
		
	return 0;
	}
