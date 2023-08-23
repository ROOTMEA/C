#include <stdio.h>

float reel()
{
	float a;

	printf("Enter the float number:");
	scanf("%f",&a);

	if(a<0)
	{
		int split;

		split=a/1;

		printf("negative\n%d\n",split);
		printf("float value %f",a);
	}
	else
	{
		int split;

		split=a/1;

		printf("pozitive\n%d\n",split);
		printf("float value %f",a);
	}

}

int main()
{
	reel();

	return 0;
}
