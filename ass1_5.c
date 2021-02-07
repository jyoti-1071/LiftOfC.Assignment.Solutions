#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a char");
    fflush(stdin);
    scanf(" %c", &ch);
    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
             { 
                printf("%c is a vowel",ch);
                break;
             }
        default :
                printf("%c is a consonant",ch);        
    }
}