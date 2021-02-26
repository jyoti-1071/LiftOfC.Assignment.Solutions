#include<stdio.h>
int fact(int n);
void main()
{
    int n,k;
    scanf("%d",&n);
    k=fact(n);
    printf("factorial=%d",k);
}
int fact(int n)
{
    static int mul;
    if(n==1)
    {
        return 1;
    }
    else mul=n*fact(n-1);
}