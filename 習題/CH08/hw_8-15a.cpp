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
	int n;
	double x;
	while(1)
	{
		printf("¿é¤J x »P n: ");
		scanf("%lf %d", &x, &n);
		printf("my_fun(%3.1f,%d)= %15.14f\n", x, n, my_fun(x,n));
		if(x==0 && n==0)
			break;
	}
		
	system("pause");
	return 0;
}
