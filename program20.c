// write a program given n number Divisible by 3 OR 5..
#include <stdio.h>
int main() {
    
    int n;
    printf("Enter Number :");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        if(i%3==0 && i%5==0)
        {
            printf("\n%d is Divisible by both ",i);
        }
        else if (i%3==0 && i%5==0)
        {
            printf("\n%d is Divisible by 3 Or 5",i);
        }
        else
        {
            printf("\n%d is not Divisible by 3 Or 5",i);
        }
    }
    
    return 0;
}