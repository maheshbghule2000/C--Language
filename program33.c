// 05.2 accept number from user and display its factors in decreasing order
#include<stdio.h>

void FactRev(int iNo)
{
    int Fact=iNo/2;

    while(Fact>0)
    {
        if(iNo%Fact==0)
        {
            printf(" %d ",Fact);
        }
        Fact--;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);
    FactRev(iValue);
    return 0;
}
