#include<stdio.h>
int i,j,x,y;
main()
{
	printf("Matris boyutlarini giriniz:");
	scanf("%d %d",&x,&y);
	int a[x][y],b[y][x];
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
		printf("a[%d][%d]=",i,j);scanf("%d",&a[i][j]);	
		b[j][i]=a[i][j];
		}
	}
		for(int i=0;i<y;i++)
		{
			for(int j=0;j<x;j++)
			{
			printf("%d ",b[i][j]);
			}
			printf("\n");	
		}
	
}
