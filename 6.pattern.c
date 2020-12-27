//to print the pattern//
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the number of rows");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		for(c=1;c<=a;c++)
		{
			if(b==c||b==a||c==1||c==a-b+1||b==c||c==a)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
