//Write a program if we give 12 digit then output is 
#include <stdio.h>

int main() {
    
    int n;
    printf("Enter Number :");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            printf("%d\t",i);
        }
    }
    
    return 0;
}