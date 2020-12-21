#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter divident");
	scanf("%d",&a);
	printf("enter divisor");
	scanf("%d",&b);
	c=a/b;
	d=a%b;
	printf("quotient=%d\n",c);
	printf("reminder=%d",d);
	return 0;
}
