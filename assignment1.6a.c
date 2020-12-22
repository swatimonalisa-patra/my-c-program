//enter 3 angles of a triangle
//check valid or not
#include<stdio.h>

int main()
{
	int a1,a2,a3,sum;
	printf("enter three angles of triangle:\n");
	scanf("%d%d%d",&a1,a2,a3);
	sum=a1+a2+a3;
	if(sum==180 && a1>0 && a2>0 && a3>0)
	{
		printf("triangle is valid");
	}
	else
	{
		printf("triangle is not valid");
	}
	return 0;
}

