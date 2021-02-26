#include<stdio.h>
float sq(float n)
{
    float a;
    a=n*n;
    return a;
}
void main()
{
    float a;
    printf("Enter the number to find the square ");
    scanf(" %f",&a);
    printf(" %f",sq(a));
}