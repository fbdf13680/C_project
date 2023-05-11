#include<stdio.h> 
#include<stdlib.h> 
double square (double);
int main (void)
{
	double x=4.0;
	printf("%.2f^2= %.2f\n", x, square(x));
	
	system("pause");
	return 0;
}
double square (double k)
{
	return k*k;
}
/*
4.00^2= 16.00
請按任意鍵繼續 . . .

*/
