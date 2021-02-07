#include<stdio.h>
void main()
{
    int p,c,b,m,cp;
    float pt;
    printf("Enter your markes on physcis,chemistry,biology,mathmatics and computer");
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&cp);
    pt=((p+c+b+m+cp)/500.0)*100;
    printf("Percentage=%f",pt);
    if(pt>=90)
    {
        printf("Grade=A");
    }
    else if(pt>=80&&pt<90)
    {
        printf("Grade=B");
    }
    else if(pt>=70&&pt<80)
    {
        printf("Grade=C");
    }
    else if(pt>=60&&pt<70)
    {
        printf("Grade=D");
    }
    else if(pt>=50&&pt<40)
    {
        printf("Grade=E");
    }
    else
        printf("Grade=F");
}