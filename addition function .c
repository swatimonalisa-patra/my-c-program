//using addition function//
#include<stdio.h>
int addition(int num1,int num2)
{
	int sum;
	//arguements are used here//
	sum=num1+num2;
	//function returntype is integer so we are returning an integer value//
	return sum;
}
int main()
{
	int var1,var2;
	printf("enter number 1");
	scanf("%d",&var1);
	printf("enter number 2");
	scanf("%d",&var2);
//calling the function here the function returntype is an integer//
int res=addition(var1,var2);
printf("output:%d",res);
return 0;
}
