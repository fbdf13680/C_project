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
	if(n>1)
	{ 
		printf("%d %f\n", n, (1/pow2(n)));
		return (1/pow2(n))+my_fun(n-1);
	} 
	else
		return 0.5;
}

int main (void)
{
	int i;
	for(i=3;i<=6;i++)
	{
		printf("my_fun(%d)=%f\n", i, my_fun(i));
	}
		
	system("pause");
	return 0;
}
