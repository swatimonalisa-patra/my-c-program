/* Input marks of five subjects from user */
/* Calculate percentage */
 /* Find grade according to the percentage */
#include <stdio.h>

int main()
{
    int p, c, b, m, co; 
    float per; 
    printf("Enter five subjects marks: ");
    scanf("%d%d%d%d%d", &p, &c, &b, &m, &co);
     per = (p + c + b + m + co) / 5.0;
      printf("Percentage = %.2f\n", per);
	if(per >= 90)
    {
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}

