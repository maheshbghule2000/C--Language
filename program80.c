// 12.4 Accept number from user and count frequency of 4 in it
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CntFour(int iNo)
{
    int iDig=0,Cnt=0;

    while(iNo>0)
    {
        iDig=iNo%10;
        if(iDig==4)
        {
            Cnt++;
        }
        iNo/=10;
    }
    return Cnt;
}
int main()
{
    BOOL iValue=0,iRet=0;

    printf("Enter The Number => ");
    scanf("%d",&iValue);

    iRet=CntFour(iValue);

    printf("%d",iRet);

    return 0;
}


