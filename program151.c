// 26.3 Accept character from user. If it is capital then display all the characters from the input characters till Z. If input character is small then print all the characters in reverse order till a
#include<stdio.h>
void Display(char ch)
{
    if(ch<97)
    {
        for(;ch<=90;ch++)
        {
            printf(" %c ",ch);
        }
    }
    else
    {
        for(;ch>=97;ch--)
        {
            printf(" %c ",ch);
        }
    }
    return;
}
int main()
{
    char ch='\0';

    printf("Enter The Character => ");
    scanf("%c",&ch);

    (ch>='A' && ch<='Z' || ch>='a' && ch<='z')?Display(ch):ch;

    return 0;
}

