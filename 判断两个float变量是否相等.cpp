#include <stdio.h> 
int main() 
{
	float a;
	float b;
	float c;
	scanf("%f  , %f"  , &a , &b); 
	if(b>a)
	{c = b;
	 b = a;
	 a = c;
	}
	if(a-b<0.00001)
	{
	printf("a��b���");
	}
	else
	{
	printf("a��b�����") ;
	 } 
	 return 0;
}
