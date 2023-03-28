#include<stdio.h> 
#include<stdlib.h> 
void kitty (int);
int main (void)
{
	kitty(4);
	
	system("pause");
	return 0;
}
void kitty (int k)
{
	int i;
	for (i=1;i<=k;i++)
		printf("Hello Kitty\n");
}
