// 29.1 Write a program which accept string from user and accept one character. Check whether that character is present in string or not
#include<stdio.h>
#define TRUE 0
#define FALSE 1
typedef int BOOL;

BOOL ChkCh(char *ptr ,char cValue)
{
        if(*ptr == cValue)
        {
            return 0;
        }
    return (*++ptr != '\0')?ChkCh(ptr,cValue):1;
}
int main()
{
    char Arr[20]="\0";
    char cValue='\0';
    BOOL iRet=0;

    printf("Enter The String => ");
    fgets(Arr,20,stdin);

    printf("Enter The Character => ");
    scanf("%c",&cValue);

    iRet=ChkCh(Arr,cValue);

    (iRet==TRUE)?printf("Character Is Present"):printf("Character Is Not Present");

    return 0;
}
