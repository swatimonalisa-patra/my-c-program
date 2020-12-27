//to print the plus pattern//
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the odd numbers only");
	scanf("%d",&a);
	//upper part//
	for(b=1;b<=a;b++)
	{
		if(b==((a/2)+1))
		{
		for(c=1;c<=a;c++)
		{
			printf("*");
		}
	}
	else
	{
		for(c=1;c<=a/2;c++)
		{
			printf(" ");
		}
		printf("*");
	}
	printf("\n");
  }
return 0;
}
