#include<stdio.h> 
#include<stdlib.h> 
int cub (int);
int main (void)
{
	int x=2;
	cub(x);
	
	system("pause");
	return 0;
}
int cub (int x)
{
	int i, total=1;
	for (i=1;i<=3;i++)
		total*=x;
	printf("%d^3= %d\n", x, total);
}
