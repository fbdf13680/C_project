#include<stdio.h>
#include<stdlib.h>
int prod (int n)
{
	int i, total=1;
	for(i=1;i<=n;i++)
		total *= i;
	
	return total;
}
double my_fun (int n)
{
	if(n>1)
	{
		printf("%d\n", prod(n));
		return (1.0/prod(n))+my_fun(n-1);
	}
	else
		return 0.5;
}

int main (void)
{
	int i;
	for(i=5;i<=10;i++)
		printf("my_fun(%d)=%10f\n", i, my_fun(i));
		
	system("pause");
	return 0;
}
