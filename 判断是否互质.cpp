#include <stdio.h>
int main ()
{
	int m, n;
	int i ;
	printf("������������"); 
	scanf("%d,%d", &m , &n);
	while(m % n !=0)
	{
	i = m%n;
	m = n;
	n = i;
	}
	if(n!=1) 
        printf("������");
    else
	    printf("����");
	 return 0;
}
