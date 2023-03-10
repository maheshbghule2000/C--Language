// 21.5 Accept N numbers from user and display all such elements which are multiples of 11
#include<stdio.h>
void Display(int Arr[],int iSize)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%11==0)
        {
            printf("\n%d",Arr[iCnt]);
        }
    }
    return;
}
int main()
{
    int iSize=0,iCnt=0;
    int *ptr=NULL;

    printf("Enter Number Of Elements => ");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize * sizeof(int));

    if(ptr==NULL)
    {
        printf("Failed To Allocate Memory !");
        return -1;
    }
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("\nEnter Element %d => ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    Display(ptr,iSize);

    free(ptr);
    return 0;
}

