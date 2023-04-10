#include<stdio.h> 
#include<stdlib.h> 
int prime (int);
int is_prime(int, int);
int power(int, int);
int main (void)
{
	int x=38;
	prime(x);
	
	system("pause");
	return 0;
}
int prime (int x)
{	
	int c2=1, i=2;
	while(c2<=x)
	{
		if(is_prime(i, c2))
		{
			printf("第%d個梅森尼質數為 %d\n", c2, i);
			c2++;
		}
		i++;
	}
}
int is_prime(int x, int c2)
{
	int i;
	for(i=2;i<=x-1;i++)
		if (x%i!=0 && (x+1)==power(2, c2))
		{
			return 1;
		}
		else
			return 0;
}
int power(int x, int n)
{
	int i, y=1;
	for(i=1;i<=n;i++)
		y*=x;
	return y;
}
