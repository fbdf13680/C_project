#include<stdio.h>
#include<stdlib.h>
int three_loop(int x)
{
	int i;
	for(i=5;i<=x;i+=3)
	{
		if(x==i)
			return 1;
	}
	return 0;
}
int five_loop(int x)
{
	int i;
	for(i=8;i<=x;i+=5)
	{
		if(x==i)
			return 1;
	}
	return 0;
}
int seven_loop(int x)
{
	int i;
	for(i=9;i<=x;i+=7)
	{
		if(x==i)
			return 1;
	}
	return 0;
}
int find_num(int input)
{
	int x=1, i=0;
	while(x<=input)
	{
		while(1)
		{
			if(three_loop(i))
				if(five_loop(i))
					if(seven_loop(i))
					{ 
						printf("�]�l���D��%d�ӳ̤p��Ƭ�%d\n", x, i);
						break;
					} 
			i++;
		}
		i++;
		x++;
	}
}

int main (void)
{
	int input=5;
	find_num(input);
	
	system("pause");
	return 0;
}
