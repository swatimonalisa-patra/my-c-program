//to print the pattern//
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter the number of columns");
	scanf("%d",&a);
	//upper part//
	for(b=1;b<=a;b++)
	{
		for(c=1;c<=a-1;c++)
		{
			printf(" ");
		}
		for(d=0;d<=a-1;d++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(b=1;b<a;b++)
	{
		for(c=1;c<=b+1;c++)
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
