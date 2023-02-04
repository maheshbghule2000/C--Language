// 32.4 Write a program which checks whether 7th & 8th & 9th bit is On or OFF
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL ChkBit(UINT iNo)
{
    int i=1;
    if(iNo>>6 & 1 && iNo>>7 & 1 && iNo>>8 & 1)
    {
        return TRUE;
    }
    return FALSE;
}
int main()
{
    UINT iValue=0;
    BOOL bRet=0;

    printf("Enter The Number => ");
    scanf("%d",&iValue);

    bRet=ChkBit(iValue);

    (bRet==TRUE)?printf("7th, 8th And 9th Bit Is ON"):printf("7th, 8th And 9th Bit Is OFF");

    return 0;
}
