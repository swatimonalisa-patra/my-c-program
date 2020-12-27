//to print right arrow star pattern//
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter number of columns");
	scanf("%d",&a);
	//upper part of the pattern//
	for(b=0;b<a;b++)
	{
		for(c=0;c<b;c++)
		{
			printf(" ");
		}
		for(d=1;d<=a-b;d++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(b=1;b<a;b++)
	{
		for(c=1;c<a-b;c++)
		{
			printf(" ");
		}
		for(d=1;d<=b+1;d++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
