#include <stdio.h>
int main ()
{
	int m, n;
	int i ;
	printf("请输入两个数"); 
	scanf("%d,%d", &m , &n);
	while(m % n !=0)
	{
	i = m%n;
	m = n;
	n = i;
	}
	if(n!=1) 
        printf("不互质");
    else
	    printf("互质");
	 return 0;
}
