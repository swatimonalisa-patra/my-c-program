//enter length & breadth of a triangle
//calculate the area
//calculate the perimeter
//check perimeter is greater than area or not
#include<stdio.h>
#include<conio.h>
int main()
{
    float l, b, a, p;

    printf("Enter the length of rectangle: ");
    scanf("%f", &l);

    printf("Enter the breadth of rectangle: ");
    scanf("%f", & b);

    a = l * b;
    p = 2 * (l+b);

    printf("The area of rectangle: %f\n", a);
    printf("The perimeter of rectangle: %f\n", p);

    if (a>p)
        printf("Area of rectangle is greater than it's perimeter");
    else
        printf("Perimeter of rectangle is greater than it's area");
}

