#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int prod (int n) //n!
{
	int i, total=1;
	for(i=1; i<=n; i++)
		total *= i;
	
	return total;
}

double my_fun (double x, int n)
{
	int i;
	double sum=0.0;
	for(i=1;i<=n;i++)
	{
		sum += (pow(-1.0, i)*pow(x,(2*i+1)))/prod((2*i+1));
	}
	
	return sum;
}

int main (void)
{
	int n=2;
	double x=2.2;
	while(1)
	{
		printf("my_fun(%3.1f,%d) - my_fun(%3.1f,%d) = %8.6f - %8.6f = %8.6f\n", x, n, x, n-1, my_fun(x,n), my_fun(x,n-1), my_fun(x,n)-my_fun(x,n-1));
		if(my_fun(x,n)-my_fun(x,n-1)<0.0001)
			break;
		n++;
	}
		
	system("pause");
	return 0;
}
