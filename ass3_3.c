#include<stdio.h>
int GCD(int a,int b);
int LCM(int a,int b);
void main()
{
    int a,b,gcd,lcm;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        gcd=GCD(b,a);
        lcm=LCM(a,b);
    }
    else
    {
        gcd=GCD(a,b);
        lcm=LCM(b,a);
    }
    printf("gcd=%d",gcd);
    printf("lcm=%d",lcm);
}
int GCD(int a,int b)
{
    if(b%a==0)
    {
        return a;
    }
    else GCD(b,b%a);
}
int LCM(int a,int b)
{
    static int com=1;
    if(com%a==0 && com%b==0)
    {
        return com;
    }
    else {
        com++;
        LCM(a,b);
    }
}