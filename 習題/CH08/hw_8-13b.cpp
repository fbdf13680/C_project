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
		return (1.0/prod(n))+my_fun(n-1);
	}
	else
		return 1;
}

int main (void)
{
	int i;
	for(i=2;i<=10;i++)
	{
		if((my_fun(i)-my_fun(i-1))<0.0001)
		{
			printf("my_fun(%d)-my_fun(%d)=%10f\n", i, i-1, my_fun(i)-my_fun(i-1));
			break;
		}
	}
		
	system("pause");
	return 0;
}
