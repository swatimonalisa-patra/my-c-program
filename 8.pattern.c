#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter the number of rows");
	scanf("%d",&a);
	for(b=1;c<=a;b++)
	{
		for(c=1;c<b;c++)
		{
			printf(" ");
		}
		for(d=1;d<=a;d++)
		{
			if(b==1||b==a||d==1||d==a)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
