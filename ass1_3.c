#include<stdio.h>
void main()
{
    float r,d,a,c;
    printf("Enter the value of radius");
    scanf("%f",&r);
    d=2*r;
    a=3.14*r*r;
    c=2*3.14*r;
    printf("Diameter=%f \n Area=%f \n Curcumference=%f",d,a,c);
}