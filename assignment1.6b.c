//enter 3 sides of triangle 
//check valid or not
#include <stdio.h>

int main()
{
    int s1, s2, s3;

    
    printf("Enter three side of triangle: \n");
    scanf("%d%d%d", &s1, &s2, &s3);

    if((s1 + s2 > s3) && (s1 + s3 > s2) && (s2 + s3 > s1))
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }

    return 0;
}

