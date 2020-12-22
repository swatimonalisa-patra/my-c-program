//enter a 5 digit number
//obtain the reverse number
//check origional or reverse are equal or not
#include<stdio.h>
int main()
{
	int num,n,r=0;
	printf("enter a  number");
	scanf("%d",&num);
	n=num;
	while(num!=0)
	{
		r=r*10;
		r=num%10+r;
		num=num/10;
	}
	printf("reversed number of %d is %d \n",n,r);
	if(n==r)
	printf("input number %d & reversed number %d are equal",n,r);
	else
	printf("input number %d & reversed number %d are not equal",n,r);
	return 0;
}
