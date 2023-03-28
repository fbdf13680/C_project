#include<stdio.h> 
#include<stdlib.h> 
int mod (int, int);
int main (void)
{
	int x=17, y=5;
	printf("%d/%d ªº¾l¼Æ¬° %d\n", x, y, mod(x, y));
	
	system("pause");
	return 0;
}
int mod (int x, int y)
{
	return (x%y);
}
