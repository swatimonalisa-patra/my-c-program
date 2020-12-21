#include<stdio.h>
int main()
{
	float p,t,r,si;
	
/*input principle,rate and time*/
printf("enter principle amount");
scanf("%f",&p);
printf("enter time");
scanf("%f",&t);
printf("enter rate");
scanf("%f",&r);
si=(p*t*r)/100;
printf("simple interest = %f",si);
return 0;
}

