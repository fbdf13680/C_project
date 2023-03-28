#include<stdio.h> 
#include<stdlib.h> 
int find_prime (int);
int main (void)
{
	int x=100;
	printf("第%d個質數為 %d\n", x, find_prime(x));
	
	system("pause");
	return 0;
}
int find_prime (int x)
{
	int i, target, c1, c2=1, j;
	for(i=2;i<=10000;i++)
	{
		c1=0;
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
				c1+=1;
		}
		if(c1==1)
		{
			printf("第%d個質數為 %d\n", c2, i);
			c2+=1;
		}
		else if (c2==x)
			return i;
	}
}
