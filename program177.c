// 31.4 Write a program which accept string from user and copy that characters of that string into another string by converting all capital characters into small case

#include<stdio.h>
void StrRevCpy(char* str ,char* dest)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str<= 'Z')
        {
            *dest=*str+32;
            dest++;
            str++;
            continue;
        }
        *dest=*str;
        dest++;
        str++;
    }
    *dest='\0';
    return;
}
int main()
{
    char Str[30]="\0";
    char Dest[30]="\0";

    printf("Enter The String => ");
    scanf("%[^\n]s",Str);

    StrRevCpy(Str,Dest);

    printf("%s",Dest);

    return 0;
}
