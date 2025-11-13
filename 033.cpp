#include<stdio.h>
int a[3][3],b[3][3],c[3][3];
int i,j;
main()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
			{
			printf("b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
			c[i][j]=a[i][j]+b[i][j];
			}
		}		
		for(int i=0;i<3;i++)//2 boyutlu diziyi ekrana yazdýrma
		{
			for(int j=0;j<3;j++)
			{
			printf("%d ",c[i][j]);
			}
			printf("\n");	
		}
		}
