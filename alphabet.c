//to print the character pattern//
#include<stdio.h>
int main()
{
	int n,i,j,k;
	char ch;
	printf("enter number of lines");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		ch = 'A';
		for(j=0;j<=n-i;j++,ch++)
		{
			printf(" %c ",ch);
		}
		if(i==0)
		{
			printf(" %c ",ch);
		}
		else
		{
			for(k=0;k<(2*i)+1;k++)
			{
				printf(" ");
			}
		}
		ch--;
		for(j=0;j<=n-i;j++,ch--)
		{
			printf(" %c ",ch);
		}
		if(i==0)
		{
			printf(" %c ",ch);
		}
		else
		{
			for(k=0;k<(2*i)-1;k++)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
