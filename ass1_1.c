#include<stdio.h>
void main()
{
    float div,add,sub,mul,a,b;
    printf("Enter any two number.");
    scanf("%f %f",&a,&b);
    add=a+b;
    if(a<b)
    {
        sub=b-a;
        div=b/a;
    }
    else 
    {
        sub=a-b;
        div=a/b;
    }    
    mul=a*b;
    printf("sum=%f \n subtraction=%f \n division=%f \n multiplication=%f ",add,sub,div,mul);    
}