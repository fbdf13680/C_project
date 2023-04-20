#include<stdio.h>
#include<stdlib.h>
int pow2 (int n)
{
	int i, total=1;
	for(i=1;i<=n;i++)
		total *= 2;
		
	return total;
}
double my_fun (int n)
{
	int i;
	double total=0.0;
	for(i=1;i<=n;i++)
	{
		total+=(1.0/pow2(i));
	}
	return total;
}

int main (void)
{
	int i;
	for(i=3;i<=1000;i++)
		printf("my_fun(%d)=%f\n", i, my_fun(i));
		
	system("pause");
	return 0;
}
