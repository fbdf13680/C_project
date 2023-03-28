#include<stdio.h> 
#include<stdlib.h> 
int power (int, int);
int main (void)
{
	int x=5, n=3;
	printf("%d^%d ¬° %d\n", x, n, power(x, n));
	
	system("pause");
	return 0;
}
int power (int x, int n)
{
	int i, prod=1;
	for(i=1;i<=n;i++)
		prod*=x;
		
	return prod;
}
