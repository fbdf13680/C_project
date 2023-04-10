#include<stdio.h> 
#include<stdlib.h> 
int prime (int);
int is_prime(int);
int main (void)
{
	int x=100;
	prime(x);
	
	system("pause");
	return 0;
}
int prime (int x)
{	
	int c2=1, i=0;
	while(c2<=x)
	{
		if(is_prime(i))
		{
			printf("第%d個質數為 %d\n", c2, i);
			c2++;
		}
		i++;
	}
}
int is_prime(int x)
{
	int i;
	for(i=2;i<=x-1;i++)
		if (x%i==0 || x==1)
		{
			return 0;
		}
	return 1;
}
