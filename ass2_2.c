#include<stdio.h>
void main()
{
    int a[10],c=0,k=0;
    printf("enter the values in the array (10)");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            c=c+a[i];
        }
        else if(i%2==0)
        {
            k=k+a[i];
        }
    }
    printf("Sum of even numbers=%d \n Sume of even terms=%d",c,k);
}