// 07.1 Accept number from user and print that number of star on screen
#include<stdio.h>

void Pattern(int iNo)
{
    if(iNo<0)
    {
        iNo=-(iNo);
    }
    for(int i=1;i<=iNo;i++)
    {
        printf(" $ *");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number => ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
