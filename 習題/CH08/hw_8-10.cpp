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
			printf("��%d�ӱ��˥���Ƭ� %d\n", i, a);
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
��1�ӱ��˥���Ƭ� 3
��2�ӱ��˥���Ƭ� 7
��3�ӱ��˥���Ƭ� 31
��4�ӱ��˥���Ƭ� 127
��5�ӱ��˥���Ƭ� 8191
��6�ӱ��˥���Ƭ� 131071
��7�ӱ��˥���Ƭ� 524287
��8�ӱ��˥���Ƭ� 2147483647
�Ы����N���~�� . . .
*/ 

