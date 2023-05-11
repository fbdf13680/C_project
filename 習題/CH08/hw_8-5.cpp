#include<stdio.h> 
#include<stdlib.h> 
int mod (int, int);
int main (void)
{
	int x=17, y=5;
	printf("%d/%d 的餘數為 %d\n", x, y, mod(x, y));
	
	system("pause");
	return 0;
}
int mod (int x, int y)
{
	return (x%y);
}
/*
17/5 的餘數為 2
請按任意鍵繼續 . . .


*/
