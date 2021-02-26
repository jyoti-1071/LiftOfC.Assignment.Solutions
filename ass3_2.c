#include<stdio.h>
void fact(int);
void main()
{
    int n;
    scanf("%d",&n);
    fact(n);
}
void fact(int a)
{
    int i=1;
    for(int j=1;j<=a;j++)
    {
        i=i*j;
    }
    printf("factorial of %d is %d",a,i);
}