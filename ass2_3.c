#include<stdio.h>
void main()
{
    char ch[100];
    int c=0;
    scanf("%[^\n]%*c",ch);
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]==' '||ch[i]=='\t')
        {
            c++;
        }
    }
    printf("Total number of words=%d",c);
}