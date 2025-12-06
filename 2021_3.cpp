#include<stdio.h>
#define pi 3.14
float r,h,hacim,alan,cevre;
main()
{
	printf("Silindirin yaricapini giriniz:");
	scanf("%f",&r);
	printf("Silindirin yuksekligini giriniz:");
	scanf("%f",&h);

	hacim=(pi*r*h)/3;
	printf("Silindirin Hacmi=%f",hacim);
	
	//printf("Dairenin Alani=%f\nDairenin Cevresi=%f",alan,cevre);
}
