#include<stdio.h>
int a,yuzler,birler,onlar;
main()
{
	printf("3 basamakli bir sayi giriniz:");
	scanf("%d",&a);
	birler=a%10;
	a=(a-birler)/10;
	onlar=a%10;
	
	yuzler=(a-onlar)/10;
	printf("Yuzler=%d,Onlar=%d,Birler=%d",yuzler,onlar,birler);

}
