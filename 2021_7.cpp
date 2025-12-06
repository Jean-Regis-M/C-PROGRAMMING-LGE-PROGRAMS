#include<stdio.h>
int a=15,b,c;
main()
{
	c=++a;
	printf("%d",c);
	b=c--;
	printf("%d %d %d",a,b,c);
	}
