#include<stdio.h>
int main()

{
	int a,b;
	unsigned long long fact = 1;
	printf("enter an integer");
	scanf("%d",&a);
	if (a < 0)
	printf("Error!factorial of a negative number doesn't exist");
	else
	{
		for(b=1;b<=a;++b)
		{
			fact *= b;
		}
		printf("factorialof %d = %llu",a,fact);
	
	}
	return 0;
}



