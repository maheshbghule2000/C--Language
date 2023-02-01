// Sum of  Numbers n numbers
#include <stdio.h>

int main() {
    
    int n=3;
    
    printf("Enter Number :");
    scanf("%d",&n);
    
    int sum=0;
    
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    
    printf("Sum of 1to %d:- %d",n,sum);
    
    return 0;
}