// 09.3 Accept Number From User And Print Multiplication Of Its Even Factorial
#include<stdio.h>
int EvenFactor(iNo)
{
    int i=0,Mult=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=2;i<=iNo;i++)
    {
        if(i%2==0)
        {
            Mult=Mult*i;
        }
    }
    return Mult;
}
int main()
{
    int iValue=0;

    printf("Enter The Value => ");
    scanf("%d",&iValue);

    printf("Multiplication Of %d Is %d",iValue,EvenFactor(iValue));

    return 0;
}
