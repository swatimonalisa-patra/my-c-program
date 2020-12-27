//to print the pattern//
#include<stdio.h>
int main()
{
	int n,s,i,j;
	printf("enter number of rows");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		//for loop for space//
		for(s=i;s<n;s++)
		printf(" ");
		//for loop for star//
		for(j=1;j<=(2*i-1);j++)
		printf("*");
		//ending line//
		printf("\n");
	}
	return 0;
}
