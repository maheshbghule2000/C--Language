#include <stdio.h>

int main()
{
    int number;
    
    printf("Enter Number: ");
    scanf("%d", &number);
    
    for (int i = 1; i <= number; i++)
    {
        printf("Baap--%d\n", i);
    }
    
    return 0;
}
