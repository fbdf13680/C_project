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
	int n=2;
	double x=0.1, a, b;
	while(1)
	{
		a=my_fun(x,n);
		b=my_fun(x,n-1);
		printf("my_fun(0.1, %d)-my_fun(0.1, %d)=%8.6f-%8.6f=%8.6f\n", n, n-1, a, b, a-b);
		if((my_fun(0.1, n)-my_fun(0.1, n-1)<0.00001))
			break;
		n++;
	}
		
	system("pause");
	return 0;
}
