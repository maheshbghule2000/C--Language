// 26.5 Accept character from user and display its ASCII value in decimal, octal and hexadecimal format
#include<stdio.h>

int main()
{
    char ch='\0';
    printf("Enter The Character => ");
    scanf("%c",&ch);

    printf("Decimal : %d \nOctal : %o \nHexadecimal : %X\n",ch,ch,ch);

    return 0;
}

