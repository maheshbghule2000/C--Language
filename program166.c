// 29.3 Write a program which accept string from user and accept one character. Return index of first occurrence of that character
#include<stdio.h>

int ChkCh(char *ptr ,char cValue)
{
    int Cnt=0;
    while(*ptr != '\0')
    {
        if(*ptr == cValue)
        {
            return Cnt;
        }
        ptr++;
        Cnt++;
    }
    return -1;
}
int main()
{
    char Arr[20]="\0";
    char cValue='\0';
    int iRet=0;

    printf("Enter The String => ");
    fgets(Arr,20,stdin);

    printf("Enter The Character => ");
    scanf("%c",&cValue);

    iRet=ChkCh(Arr,cValue);

    (iRet>=0)?printf("First Occurence Of Character %c Is In Index No :- %d",cValue,iRet):printf("Character Is Not Present");

    return 0;
}
