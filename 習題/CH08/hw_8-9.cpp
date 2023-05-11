#include<stdio.h> 
#include<stdlib.h> 
int prime (int);
int is_prime(int);
int main (void)
{
	int i;
	for(i=1;i<=100;i++)
	{
		if(is_prime(i))
			printf("%d  ", i);
	}
	
	
	system("pause");
	return 0;
}

int is_prime(int x)
{
	if(x==1)
	{
		return 0;
	}
	int i;
	for(i=2;i<x;i++)
		if (x%i==0) // 不能把 x==1 的條件設在這裡，進入迴圈後會依照迴圈邏輯迭代，而不會再檢查 x 
		{
			return 0;
		}
	return 1;
}
/*
2  3  5  7  11  13  17  19  23  29  31  37  41  43  47  53  59  61  67  71  73  79  83  89  97  請按任意鍵繼續 . . .
*/ 
