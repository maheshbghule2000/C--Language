// 31.1 Write a program which accept string from user and copy that characters of that string into another string in reverse order
#include<stdio.h>
void StrRevCpy(char* str ,char* dest)
{
    int cnt=0;
    while(*str != '\0')
    {
        str++;
        cnt++;
    }
    str--;

    while(cnt>0)
    {
        *dest=*str;
        dest++;
        str--;
        cnt--;
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
