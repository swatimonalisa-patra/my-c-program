//to find the largest number among 3 number
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the values of a,band c\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("a=%d\t b=%d\t c=%d\n",a,b,c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a is the greatest among three");
		}
		else
		{
			printf("c is the greatest among three");
		}
	}
	else if(b>c)
	printf("b is the greatest among three");
	else
	printf("c is the greatest among three");
}
