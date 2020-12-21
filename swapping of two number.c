#include<stdio.h>
int main()
{
	double a,b,temp;
	printf("enter 1st number");
	scanf("%lf",&a);
	printf("enter 2nd number");
	scanf("%lf",&b);
	temp=a;
	a=b;
	b=temp;
	printf("\nafter swapping ,firstnumber= %2lf\n",a);
	printf("after swapping,secondnumber=%2lf",b);
	return 0;
}
