//to print the pattern//
#include<stdio.h>
int main()
{
	int p,q,r,s;
	printf("enter number of rows");
	scanf("%d",&p);
	for(q=1;q<=p;q++)
	{
		//for loop for space//
		for(s=q;s<p;s++)
		printf(" ");
		//for loop to print star//
		for(r=1;r<=(2*p-1);r++)
		{
			if(q==p||r==1||r==2*q-1)
			printf("*");
			else
			printf(" ");
		}
		//ending line//
		printf("\n");
	}
	return 0;
}
