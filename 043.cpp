#include<stdio.h>
int i,j,n;
main()
{
	printf("Kaclik birim matris istiyorsunuz:");
	scanf("%d",&n);
int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			a[i][j]=i*i;
			else
			a[i][j]=j*j;
		}
	}
		for(int i=0;i<n;i++)//2 boyutlu diziyi ekrana yazdýrma
		{
			for(int j=0;j<n;j++)
			{
			printf("%d ",a[i][j]);
			}
			printf("\n");	
		}
}
