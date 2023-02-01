// Even Numbers 
#include <stdio.h>

int main() {
    
    int n;
    printf("Enter Number :");
    scanf("%d",&n);
    
    for(int i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
        }
    }
    
    return 0;
}