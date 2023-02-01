// 02.1 Accept one number from user and print that number of star on screen.c
void Display(int iNo)
{
    int iCnt = 0;
    // Write Updater
    while( iCnt < iNo )
    {
        printf(" * ");
        iCnt++ ;
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
