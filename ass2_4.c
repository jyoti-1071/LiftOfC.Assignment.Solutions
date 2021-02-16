#include<stdio.h>
void main()
{
    int a[10],max,min;
    printf("Enter values in array(10)");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(i==0)
        {
            max=min=a[i];
        }
        else if(a[i]>max)
        {
            max=a[i];
        }
        else if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("MAX=%d\nMIN=%d",max,min);
}