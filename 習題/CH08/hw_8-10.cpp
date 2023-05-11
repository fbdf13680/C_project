#include<stdio.h> 
#include<stdlib.h> 
#include<math.h>
int mersenne (int);
int is_prime (int);
int main (void)
{
	int x=8;
	mersenne(x);
	
	system("pause");
	return 0;
}
int mersenne (int x)
{	
	int i=1, n, a;
	for(n=2;n>0;n++)
	{
		a = pow(2,n)-1;
		if(is_prime(a))
		{
			printf("第%d個梅森尼質數為 %d\n", i, a);
			i++;
		}
		if(i>x)
			break;
	}
}  
int is_prime(int x)
{
	int i;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
			return 0;
	}
	return 1;
}
/*
第1個梅森尼質數為 3
第2個梅森尼質數為 7
第3個梅森尼質數為 31
第4個梅森尼質數為 127
第5個梅森尼質數為 8191
第6個梅森尼質數為 131071
第7個梅森尼質數為 524287
第8個梅森尼質數為 2147483647
請按任意鍵繼續 . . .
*/ 

