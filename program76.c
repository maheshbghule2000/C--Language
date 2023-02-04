// 11.5 Accept accept range from user and display all numbers in between that range in reverse order
#include<stdio.h>
void RangeDisplay(int istart,int iend)
{
    if(istart > iend)
    {
        printf("Invalid Range !!!");
    }
    else
    {
        for(;istart<=iend;iend--)
        {
            printf("\t%d",iend);
        }
    }
}
int main()
{
    int istart=0,iend=0;

    printf("Enter The Starting Point => ");
    scanf("%d",&istart);

    printf("Enter The Ending Point => ");
    scanf("%d",&iend);

    RangeDisplay(istart,iend);

    return 0;
}

