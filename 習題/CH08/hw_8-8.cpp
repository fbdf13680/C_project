#include<stdio.h> 
#include<stdlib.h> 
double pow (double x, int n)
{
	int i;
	double k=1;
	for(i=1;i<=n;i++)
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
	printf("x=%5.1f, f(x)=%.4f\n", i, func(i));
	printf("x=%5.1f, f(x)=%.4f\n", j, func(j));
	printf("x=%5.1f, f(x)=%.4f\n", k, func(k));
	printf("x=%5.1f, f(x)=%.4f\n", h, func(h));
	
	system("pause");
	return 0;
}
/*
x= -3.2, f(x)=-105.7040
x= -2.1, f(x)=-32.9830
x=  0.0, f(x)=-1.0000
x=  2.1, f(x)=30.9830
請按任意鍵繼續 . . .
*/
