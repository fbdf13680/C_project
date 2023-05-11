#include<stdio.h> 
#include<stdlib.h> 
int find_prime (int);
int main (void)
{
	int x=100;
	printf("第%d個質數為 %d\n", x, find_prime(x));
	
	system("pause");
	return 0;
}
int find_prime (int x)
{
	int i, c=1, j;
	for(i=2;i>0;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
			
			if(j == i - 1)
			{
                c += 1;
            }
        }
        
        if(c == x)
            return i;
	}
}
/*
第100個質數為 541
請按任意鍵繼續 . . .
*/

