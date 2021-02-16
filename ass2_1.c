#include<stdio.h>
void main()
{
    int n,k,s=0;
    scanf("%d",&n);
    while(n!=0)
    {
        k=n%10;
        s=s+k;
        n=n/10;
    }
    printf("%d",s);
}