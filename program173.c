// 30.5 Write a program which 2 strings from user and concat second string after first string
#include<stdio.h>
void strcatx(char*str ,char*dest)
{
    while(*str != '\0')
    {
        str++;
    }
    *str = ' ';
    str++;
    while(*dest != '\0')
    {
        *str = *dest;
        dest++;
        str++;
    }
    *str='\0';
    return;
}
int main()
{
    char str[60]="\0";
    char str2[30]="\0";

    printf("Enter The String => ");
    scanf("%[^\n]s",str);

    printf("Enter The String => ");
    scanf(" %[^\n]s",str2);

    strcatx(str,str2);

    printf("%s",str);

    return 0;
}
