#include <stdio.h>
int main ()
{
	int m, n;
	int i , a , b , c;
	printf("请输入两个数"); 
	scanf("%d,%d", &m , &n);
	a = m;
	b = n;
	while(m % n !=0)
	{
	i = m%n;
	m = n;
	n = i;
	}
	c =(a * b )/ n;
	printf ("%d" , c);
	return 0;
	}
	
