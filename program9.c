/*02.3  Accept on number from user if number is less than
  10 then print “Hello” otherwise print “Demo”.c */
#include<stdio.h>

void Display (int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("DEMO");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d" ,&iValue);

    Display(iValue);

    return 0;
}
