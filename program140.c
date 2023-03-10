// 24.3 Accept N numbers from user and return the difference between largest and smallest number
#include<stdio.h>
#include<malloc.h>
int Minimum(int Arr[],int iLen)
{
    int i=0,Min=0,Max=0;

    for(i=0;i<iLen;i++)
    {
        (i==0)?Max=Arr[i],Min=Arr[i]:(Arr[i]<Min)?Min=Arr[i]:(Arr[i]>Max)?Max=Arr[i]:Max;
    }
    return Max-Min;
}
int main()
{
    int iLen=0,iRet=0,*p=NULL,Cnt=0;

    printf("Enter The Number Of Elements => ");
    scanf("%d",&iLen);

    p=(int *)malloc(iLen*sizeof(int));

    if(p==NULL)
    {
        printf("Failed To Allocate Memory....");
    }
    else
    {
        printf("Enter The Elements \n");
        for(Cnt=0;Cnt<iLen;Cnt++)
        {
            printf("\nEnter The Element %d => ",Cnt+1);
            scanf("%d",&p[Cnt]);
        }

        iRet=Minimum(p,iLen);

        printf("\nDifference Is %d",iRet);

    }
    free(p);
    return 0;
}

