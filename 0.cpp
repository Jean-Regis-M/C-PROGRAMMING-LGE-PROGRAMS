#include<stdio.h>
int boyut(char a[100])
{
	int sayac=0,i;
	for(i=0;a[i]!='\0';i++)
	sayac++;
	return(sayac);
}
main()
{
char k[100];
gets(k);
printf("%d",boyut(k));
}
