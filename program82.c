// 13.1 Accept number from user and return the count of even digits
#include<stdio.h>

int CntEven(int iNo)
{
    int iDig=0,Cnt=0;

    while(iNo>0)
    {
        iDig=iNo%10;
        if(iDig%2==0)
        {
            Cnt++;
        }
        iNo/=10;
    }
    return Cnt;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter The Number => ");
    scanf("%d",&iValue);

    iRet=CntEven(iValue);

    printf("%d",iRet);

    return 0;
}
