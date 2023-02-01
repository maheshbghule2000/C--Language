// 02.2 Accept one number from user and print that number of star on screen.c
void Display(int iNo)
{
    // Write Updater
    while( iNo > 0  )
    {
        printf(" * ");
        iNo--;
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
