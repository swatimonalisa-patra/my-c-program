//to print the pattern//
#include<stdio.h>
int main()
{
	int a,b,c,d=1,e;
	printf("enter size of diamond ");
	scanf("%d",&a);
	for(b=0;b<=a;b++)
	{
		for(c=a;c>b;c--)
		{
			printf(" ");
		}
		printf("*");
		if(b>0)
	{
		for(e=1;e<=d;e++)
	{
		printf(" ");
    }
    d+=2;
    printf("*");
    }
    printf("\n");
    }
    d-=4;
    for(b=0;b<=a-1;b++)
    {
    	for(c=0;c<=b;c++)
	{
		printf(" ");
	}
	printf("*");
	for(e=1;e<=d;e++)
	{
		printf(" ");
	}
	d-=2;
	if(b!=a-1)
	{
		printf("*");
	}
	//end line//
	printf("\n");
}
return 0;
}
