#include<stdio.h> 
#include<stdlib.h> 
double pow (double x, double n)
{
	int i, k=1;
	for(i=0;i<=n;i++)
		k*=x;
	
	return k;
}
double func (double x)
{
	return (3*pow(x,3)+2*x-1);
}
int main (void)
{
	float i=-3.2, j=-2.1, k=0, h=2.1;
	printf("x=%5.1f, f(x)=%.2f\n", i, func(i));
	printf("x=%5.1f, f(x)=%.2f\n", j, func(j));
	printf("x=%5.1f, f(x)=%.2f\n", k, func(k));
	printf("x=%5.1f, f(x)=%.2f\n", h, func(h));
	
	system("pause");
	return 0;
}
