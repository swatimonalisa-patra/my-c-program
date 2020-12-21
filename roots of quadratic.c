#include<math.h>
#include<stdio.h>
int main()
{
	double a,b,c,d,e,f,g,h;
	printf("enter cofficients a,b and c");
	scanf("%lf %lf %lf",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
	{
		e=(-b+sqrt(d))/(2*a);
		f=(-b-sqrt(d))/(2*a);
		printf("root1=%.2lf and root2 = %2lf",e,f);
		}
		else
		{
			g= -b/(2*a);
			h= sqrt(-d)/(2*a);
			printf("root1=%.2lf+%.2lfi and root2=%.2f-%.2fi",g,h,g,h);
				}
				return 0;
	}
