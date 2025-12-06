#include<stdio.h>
//#include<math.h>
#define pi 3.14

float r,alan,cevre;
main()
{
	printf("Yaricapi giriniz:");
	scanf("%f",&r);
	alan=pi*r*r;
	cevre=2*pi*pow(r,2);
	printf("Dairenin Alani=%f\nDairenin Cevresi=%f",alan,cevre);
}
