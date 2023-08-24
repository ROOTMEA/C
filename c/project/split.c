#include <stdio.h>

float split(a)
float a;
{
	int remaning;

	remaning = a/1;

	printf("%d\n",remaning);
}


int main()
{
	float inputNMB;
	
	printf("Enter the reel number:");
	scanf("%f",&inputNMB);

	split(inputNMB);

	return 0;
}
