#include<stdio.h>
#include<stdlib.h>
int prod (int n)
{
	int i, total=1;
	for(i=1;i<=n;i++)
		total *= i;
	
	return total;
}
double func(double x, int n)
{
	int i;
	double total=1;
	for(i=1;i<=n;i++)
		total *=x;
	
	return total;
}
double my_fun (double x, int n)
{
	if(n>1)
	{
		return (func(x,n)/prod(n))+my_fun(x,n-1);
	}
	else
		return x/1;
}

int main (void)
{
	int n;
	double x;
	while(1)
	{
		printf("¿é¤Jx»Pn: ");
		scanf("%lf %d", &x, &n);
		if(x==0)
			break;
		printf("my_fun(%3.1f, %d)=%15.14f\n", x, n, my_fun(x,n));
		
	}
		
	system("pause");
	return 0;
}
