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
		if (x%i==0) // ����� x==1 ������]�b�o�̡A�i�J�j���|�̷Ӱj���޿譡�N�A�Ӥ��|�A�ˬd x 
		{
			return 0;
		}
	return 1;
}
/*
2  3  5  7  11  13  17  19  23  29  31  37  41  43  47  53  59  61  67  71  73  79  83  89  97  �Ы����N���~�� . . .
*/ 
