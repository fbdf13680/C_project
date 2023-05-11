#include<stdio.h> 
#include<stdlib.h>
int find_k(int n)
{
	int i, a, b;
	for(i=1;i<n;i++)
	{
		a = 4*i+2;
		b = 4*(i+1)+2;
//		printf("a=%d, b=%d\n", a, b);
		if(a<n && b>n)
		{
			if(n-a <= b-n )
			{
//				printf("i=%d", i);
				return i;
			}
			else
				return i+1;
		}
	}
}
int main (void)
{
	int n=0;
	while(1)
	{
		printf("輸入一數字: "); 
		if(scanf("%d", &n)==0.0)
			break;
		printf("4k+2最接近%d的k為%d\n", n, find_k(n));
		
	}
	
	system("pause");
	return 0;
}
