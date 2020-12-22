//input the costprice & sellingprice
//calculate profit or loss
//how much profit or loss
#include<stdio.h>
int main()
{
	float cp,sp,p,l;
	printf("enter the cost_price of an item");
	scanf("%f",&cp);
	printf("enter the selling_price of an item");
	scanf("%f",&sp);
	if(sp>cp)
	{
		p=sp-cp;
		printf("we earn profit by selling item",p);
	}
	else if(sp<cp)
    {
    	l=cp-sp;
    	printf("\nwe incurred loss on selling item",l);
    }
	else
	{
		printf("\nwe dont get any loss & profit on selling item");
	}	
}
