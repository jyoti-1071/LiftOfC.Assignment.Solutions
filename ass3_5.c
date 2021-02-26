#include<stdio.h>
int pallin(int x);
void main()
{
    int  n, y;
    scanf("%d",&n);
    y=pallin(n);
    if(n==y)
    {
        printf("pallindrom");
    }
    else printf("not pallindrom");
}
int pallin(int x)
{
    int n;
    static int p=0;
    if(x!=0)
    {
        n=x%10;
        p=p*10+n;
        pallin(x/10);
    }
    else return p;
}